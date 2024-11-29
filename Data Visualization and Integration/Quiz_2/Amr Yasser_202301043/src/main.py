import sys
import os

# Add the parent directory to the Python path
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from src.dataset import get_data
from src.layout import get_layout
from src.callbacks import register_callbacks
from dash import Dash, html, dash_table, dcc, callback, Output, Input
import pandas as pd
import dash_bootstrap_components as dbc


def main():

    # Initialize the app - incorporate a Dash Bootstrap theme
    external_stylesheets = [dbc.themes.CERULEAN]
    app = Dash(__name__, external_stylesheets=external_stylesheets)
    
    app.layout = get_layout()
    register_callbacks(app)
    app.run(debug=True)


# Run the app
if __name__ == '__main__':
    main()
    