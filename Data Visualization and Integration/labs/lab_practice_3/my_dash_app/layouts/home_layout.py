from dash import html, dcc

def create_layout():
    return html.Div([
        html.H1("Hotel Booking Analysis Dashboard"),
        dcc.Graph(id='booking-trends'),
        dcc.Graph(id='lead-time-analysis'),
        dcc.Graph(id='special-requests-correlation'),
        dcc.Graph(id='repeated-guest-analysis'),
        dcc.Graph(id='market-segment-analysis'),
        dcc.Graph(id='room-type-comparison'),
        dcc.Graph(id='top-countries'),
        dcc.Graph(id='medium-countries'),
        dcc.Graph(id='children-babies-cancellation'),
        dcc.Graph(id='car-parking-demand')
    ])
