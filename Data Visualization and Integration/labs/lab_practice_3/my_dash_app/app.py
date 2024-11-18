import os
import pandas as pd
from dash import Dash, html, dcc
import plotly.express as px

full_data_path = "data/hotel_bookings.csv"
sample_data_path = "data/sample_hotel_bookings.csv"

data_path = full_data_path if os.path.exists(full_data_path) else sample_data_path

df = pd.read_csv(data_path)
df['reservation_status_date'] = pd.to_datetime(df['reservation_status_date'])
df['total_nights'] = df['stays_in_weekend_nights'] + df['stays_in_week_nights']
df['children'] = df['children'].fillna(0)
df['country'] = df['country'].fillna('Unknown')
df['agent'] = df['agent'].fillna(0)
df['company'] = df['company'].fillna(0)
df = df.drop_duplicates()
df['adults'] = df['adults'].apply(lambda x: 5 if x > 5 else x)
df['children'] = df['children'].apply(lambda x: 3 if x > 3 else x)
df['babies'] = df['babies'].apply(lambda x: 3 if x > 3 else x)

aggregated_df = df.groupby([df['reservation_status_date'].dt.to_period('M')]).size().reset_index(name='count')
aggregated_df['reservation_status_date'] = aggregated_df['reservation_status_date'].dt.to_timestamp()
aggregated_df = aggregated_df.sort_values(by='reservation_status_date')
fig_booking_trends = px.line(
    aggregated_df,
    x='reservation_status_date',
    y='count',
    title='Booking Trends (All Years and Months)',
    labels={'count': 'Number of Bookings', 'reservation_status_date': 'Date'}
)

fig_lead_time = px.box(
    df,
    x='hotel',
    y='lead_time',
    title='Lead Time by Hotel Type',
    labels={'hotel': 'Hotel Type', 'lead_time': 'Lead Time (Days)'},
    color='hotel'
)

average_cancellation = df.groupby('total_of_special_requests')['is_canceled'].mean().reset_index()
fig_special_requests = px.bar(
    average_cancellation,
    x='total_of_special_requests',
    y='is_canceled',
    title='Average Cancellation Rate by Number of Special Requests',
    labels={'total_of_special_requests': 'Number of Special Requests', 'is_canceled': 'Average Cancellation Rate'},
    color='is_canceled'
)

repeated_guest_cancellation = df.groupby('is_repeated_guest')['is_canceled'].mean().reset_index()
repeated_guest_cancellation['Guest Type'] = repeated_guest_cancellation['is_repeated_guest'].replace({0: 'First-Time Guest', 1: 'Repeated Guest'})
fig_repeated_guest = px.bar(
    repeated_guest_cancellation,
    y='Guest Type',
    x='is_canceled',
    orientation='h',
    title='Cancellation Rate: Repeated Guests vs. First-Time Guests',
    labels={'is_canceled': 'Cancellation Rate', 'Guest Type': 'Guest Type'},
    color='Guest Type'
)

market_segment_cancellation = df.groupby('market_segment')['is_canceled'].mean().reset_index()
market_segment_cancellation = market_segment_cancellation.sort_values(by='is_canceled', ascending=False)
fig_market_segment = px.bar(
    market_segment_cancellation,
    x='market_segment',
    y='is_canceled',
    title='Cancellation Rate by Market Segment',
    labels={'market_segment': 'Market Segment', 'is_canceled': 'Cancellation Rate'},
    color='market_segment'
)

reserved_room_counts = df['reserved_room_type'].value_counts().reset_index()
reserved_room_counts.columns = ['Room Type', 'Reserved Count']
assigned_room_counts = df['assigned_room_type'].value_counts().reset_index()
assigned_room_counts.columns = ['Room Type', 'Assigned Count']

room_type_counts = pd.merge(reserved_room_counts, assigned_room_counts, on='Room Type', how='outer').fillna(0)
highlighted_room_types = ['L', 'P', 'I', 'K']  # These are the rare room types

fig_room_type_comparison = px.bar(
    room_type_counts,
    x='Room Type',
    y=['Reserved Count', 'Assigned Count'],
    title='Comparison of Reserved and Assigned Room Types',
    labels={'value': 'Number of Reservations/Assignments', 'Room Type': 'Room Type'},
    barmode='group'
)
for room_type in highlighted_room_types:
    if room_type in room_type_counts['Room Type'].values:
        reserved_count = room_type_counts.loc[room_type_counts['Room Type'] == room_type, 'Reserved Count'].values[0]
        assigned_count = room_type_counts.loc[room_type_counts['Room Type'] == room_type, 'Assigned Count'].values[0]
        fig_room_type_comparison.add_annotation(
            x=room_type,
            y=max(reserved_count, assigned_count),
            text=f"Rare Type: {room_type}",
            showarrow=True,
            arrowhead=2
        )

country_counts = df['country'].value_counts().reset_index()
country_counts.columns = ['Country', 'Count']
top_countries = country_counts.head(15)
medium_countries = country_counts[15:50]
small_countries = country_counts[50:]
other_sum = small_countries['Count'].sum()
other_df = pd.DataFrame([{'Country': 'Other', 'Count': other_sum}])
combined_df = pd.concat([top_countries, other_df], ignore_index=True)

fig_top_countries = px.bar(
    combined_df,
    x='Country',
    y='Count',
    title='Number of Guests by Top 15 Countries and Others',
    labels={'Count': 'Number of Guests', 'Country': 'Country'},
    color='Country'
)

fig_medium_countries = px.bar(
    medium_countries,
    x='Country',
    y='Count',
    title='Number of Guests by Medium Countries (16-50)',
    labels={'Count': 'Number of Guests', 'Country': 'Country'}
)

children_babies_cancellation = df.groupby(['children', 'babies'])['is_canceled'].mean().reset_index()
children_babies_cancellation.columns = ['Children', 'Babies', 'Cancellation Rate']

fig_children_babies = px.bar(
    children_babies_cancellation,
    x='Children',
    y='Cancellation Rate',
    color='Babies',
    barmode='group',
    title='Cancellation Rate by Number of Children and Babies',
    labels={'Cancellation Rate': 'Cancellation Rate', 'Children': 'Number of Children', 'Babies': 'Number of Babies'}
)

car_parking_demand = df.groupby('customer_type')['required_car_parking_spaces'].mean().reset_index()
car_parking_demand.columns = ['Customer Type', 'Average Car Parking Spaces']

fig_car_parking = px.bar(
    car_parking_demand,
    x='Customer Type',
    y='Average Car Parking Spaces',
    title='Average Demand for Car Parking Spaces by Customer Type',
    labels={'Average Car Parking Spaces': 'Average Spaces', 'Customer Type': 'Customer Type'},
    color='Customer Type'
)

app = Dash(__name__)
app.layout = html.Div([
    html.H1("Hotel Booking Analysis Dashboard"),
    dcc.Graph(id='booking-trends', figure=fig_booking_trends),
    dcc.Graph(id='lead-time-analysis', figure=fig_lead_time),
    dcc.Graph(id='special-requests-correlation', figure=fig_special_requests),
    dcc.Graph(id='repeated-guest-analysis', figure=fig_repeated_guest),
    dcc.Graph(id='market-segment-analysis', figure=fig_market_segment),
    dcc.Graph(id='room-type-comparison', figure=fig_room_type_comparison),
    dcc.Graph(id='top-countries', figure=fig_top_countries),
    dcc.Graph(id='medium-countries', figure=fig_medium_countries),
    dcc.Graph(id='children-babies-cancellation', figure=fig_children_babies),
    dcc.Graph(id='car-parking-demand', figure=fig_car_parking)  # Added graph for car parking demand
])

if __name__ == '__main__':
    app.run_server(debug=True)
