import pandas as pd

def get_data():
    df = pd.read_csv('../data/vgsales.csv')
    df = clean(df)
    return df

def clean(df):
    df['Year'] = df['Year'].fillna("Unknown").astype(str)
    df['Publisher'] = df['Publisher'].fillna("Unknown")
