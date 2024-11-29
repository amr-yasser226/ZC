import dash_bootstrap_components as dbc
from dash import Dash, html, dash_table, dcc
from src.dataset import get_data

def get_layout():
    df = get_data()
    # App layout
    layout = dbc.Container([
        dbc.Row([
            html.Div('Video Games Sales Analysis for Strategic Insights', className="text-primary text-center fs-3")
        ]),

        dbc.Row([
            dbc.RadioItems(options=[{"label": x, "value": x} for x in ['Chart 1', 'Chart 2', 'Chart 3']],
                        value='Chart 1',
                        inline=True,
                        id='radio-buttons-final')
        ]),

        dbc.Row([
            dbc.Col([
                dash_table.DataTable(data=df.to_dict('records'), page_size=12, style_table={'overflowX': 'auto'})
            ], width=6),

            dbc.Col([
                dcc.Graph(figure={}, id='my-first-graph-final')
            ], width=6),
        ]),

    ], fluid=True)

    return layout