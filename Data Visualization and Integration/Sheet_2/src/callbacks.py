from dash import Input, Output
from src.charts import get_chart1, get_chart2, get_chart3 
from src.dataset import get_data
def register_callbacks(app):
    # Add controls to build the interaction
    @app.callback(
        Output(component_id='my-first-graph-final', component_property='figure'),
        Input(component_id='radio-buttons-final', component_property='value')
    )
    def update_graph(col_chosen):
        df = get_data()
        if col_chosen == "Chart 1":
            fig = get_chart1(df)
        if col_chosen == "Chart 2":
            fig = get_chart2()
        if col_chosen == "Chart 3":
            fig = get_chart3()
        
        return fig
