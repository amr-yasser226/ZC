import plotly.express as px

def get_chart1(df):
    bar_data = df["Genre"].value_counts()
    fig = px.bar(x=bar_data.index, y=bar_data.values)
    return fig

def get_chart2(df):
    #fig = 
    return None

def get_chart3(df):
    #fig = 
    return None