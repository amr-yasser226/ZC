import pandas as pd

def get_data():
    df = pd.read_csv('data/books.csv')
    df = clean(df)
    return df

def clean(df):
    #Write you data cleaning code here

    return df