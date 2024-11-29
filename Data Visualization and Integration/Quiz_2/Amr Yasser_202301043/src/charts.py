import plotly.express as px

def get_chart1(df):
    # only top platforms and genres
    top_platforms = df.groupby('Platform')['Global_Sales'].sum().sort_values(ascending=False).head(10).index
    top_genres = df.groupby('Genre')['Global_Sales'].sum().sort_values(ascending=False).head(5).index
    
    # filter for only the top platforms and genres
    filtered_df = df[(df['Platform'].isin(top_platforms)) & (df['Genre'].isin(top_genres))]

    # Bar Chart with enhancements
    fig = px.bar(
        filtered_df,
        x='Platform',
        y='Global_Sales',
        color='Genre',
        title="Top Platforms and Genres by Global Sales",
        labels={'Global_Sales': 'Global Sales (in Millions)', 'Platform': 'Gaming Platform', 'Genre': 'Game Genre'},
        barmode='group',
        color_discrete_sequence=px.colors.qualitative.Set1,  # Choose a distinct color palette
        category_orders={"Platform": top_platforms, "Genre": top_genres},  # Control order of platforms and genres
        hover_data={'Platform': True, 'Genre': True, 'Global_Sales': True},  # Show more data on hover
        height=500  # Adjust the height for better visibility
    )

    # Rotate x-axis labels for better readability
    fig.update_layout(
        xaxis_tickangle=-45,
        xaxis_title="Gaming Platform",  # More descriptive axis title
        yaxis_title="Global Sales (in Millions)",
        plot_bgcolor='white',  # Set background color to white for better contrast
        showlegend=True  # Show the legend to distinguish genres
    )
    return fig


def get_chart2(df):
    #Stacked Bar
    region_cols = ['NA_Sales', 'EU_Sales', 'JP_Sales', 'Other_Sales']
    df['Total_Regional_Sales'] = df[region_cols].sum(axis=1)
    regional_sales = df.groupby('Year')[region_cols].sum().reset_index()
    fig = px.bar(regional_sales,
        x='Year',
        y=region_cols,
        title="Regional Sales Trends by Year",
        labels={'value': 'Sales (in Millions)', 'variable': 'Region'},
        barmode='stack'
    )
    return fig

def get_chart3(df):
    #Pie Chart
    fig = px.pie(df.groupby('Genre')['Global_Sales'].sum().reset_index(),
        names='Genre',
        values='Global_Sales',
        title="Global Sales Distribution by Genre",
        labels={'Global_Sales': 'Global Sales (in Millions)'}
    )
    return fig
