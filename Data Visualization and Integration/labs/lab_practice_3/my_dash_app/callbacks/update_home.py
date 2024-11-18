from dash import Input, Output
import plotly.express as px

def register_callbacks(app, df):
    @app.callback(
        Output('booking-trends', 'figure'),
        []
    )
    def update_booking_trends():
        df['YearMonth'] = df['reservation_status_date'].dt.to_period('M')
        aggregated_df = df.groupby(['YearMonth']).size().reset_index(name='count')
        aggregated_df['reservation_status_date'] = aggregated_df['YearMonth'].dt.to_timestamp()
        aggregated_df['MonthYear'] = aggregated_df['reservation_status_date'].dt.strftime('%b %Y')
        fig = px.line(
            aggregated_df,
            x='MonthYear',
            y='count',
            title='Booking Trends (All Years and Months)',
            labels={'count': 'Number of Bookings', 'MonthYear': 'Date'}
        )
        fig.update_xaxes(
            tickmode='array',
            tickvals=list(range(len(aggregated_df['MonthYear']))),
            ticktext=aggregated_df['MonthYear'],
            tickangle=45
        )
        return fig

    @app.callback(
        Output('lead-time-analysis', 'figure'),
        []
    )
    def lead_time_analysis():
        fig = px.box(
            df,
            x='hotel',
            y='lead_time',
            title='Lead Time by Hotel Type',
            labels={'hotel': 'Hotel Type', 'lead_time': 'Lead Time (Days)'},
            color='hotel'
        )
        return fig

    @app.callback(
        Output('special-requests-correlation', 'figure'),
        []
    )
    def update_special_requests():
        average_cancellation = df.groupby('total_of_special_requests')['is_canceled'].mean().reset_index()
        fig = px.bar(
            average_cancellation,
            x='total_of_special_requests',
            y='is_canceled',
            title='Average Cancellation Rate by Number of Special Requests',
            labels={'total_of_special_requests': 'Number of Special Requests', 'is_canceled': 'Average Cancellation Rate'},
            color='is_canceled'
        )
        return fig