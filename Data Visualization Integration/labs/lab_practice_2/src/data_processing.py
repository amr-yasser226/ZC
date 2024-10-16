import pandas as pd

def load_data(file_path):
    """
    Load the CSV file and return a DataFrame.
    """
    try:
        df = pd.read_csv(file_path)
        print(f"Data loaded successfully. Total number of rows: {len(df)}")
        return df
    except FileNotFoundError:
        print(f"Error: File not found at {file_path}")
        return None
    except Exception as e:
        print(f"Error loading data: {e}")
        return None

def clean_data(df):
    """
    Clean the data by handling missing values, removing duplicates, etc.
    """
    if df is None:
        print("Error: DataFrame is None. Cannot clean data.")
        return None

    initial_rows = len(df)
    
    # Clean 'What is your annual salary?'
    salary_column = "What is your annual salary? (You'll indicate the currency in a later question. If you are part-time or hourly, please enter an annualized equivalent -- what you would earn if you worked the job 40 hours a week, 52 weeks a year.)"
    df[salary_column] = pd.to_numeric(df[salary_column].replace(r'[\$,]', '', regex=True), errors='coerce')
    df[salary_column] = df[salary_column].fillna(df[salary_column].median())  # Remove inplace
    
    # Clean 'How old are you?' and 'What country do you work in?'
    df['How old are you?'] = df['How old are you?'].fillna(df['How old are you?'].mode()[0])  # Remove inplace
    df['What country do you work in?'] = df['What country do you work in?'].fillna(df['What country do you work in?'].mode()[0])  # Remove inplace
    
    df = df.drop_duplicates()
    print(f"Data cleaned. Rows before: {initial_rows}, Rows after cleaning: {len(df)}")
    return df

def process_data():
    """
    Process the data from the CSV file (e.g., cleaning, filtering).
    """
    df = load_data('data/Manager Salary Survey.csv')

    if df is None:
        return None

    df_cleaned = clean_data(df)
    if df_cleaned is None:
        return None

    # Adjust salary
    salary_column = "What is your annual salary? (You'll indicate the currency in a later question. If you are part-time or hourly, please enter an annualized equivalent -- what you would earn if you worked the job 40 hours a week, 52 weeks a year.)"
    df_cleaned.loc[:, 'Adjusted Salary'] = df_cleaned[salary_column].apply(lambda x: x * 1.05 if x > 0 else x)

    print(f"Data processed. Final number of rows: {len(df_cleaned)}")
    return df_cleaned

def save_processed_data(df, output_path='data/processed_data.csv'):
    """
    Save the processed data to a CSV file.
    """
    if df is None:
        print("Error: DataFrame is None. Cannot save processed data.")
        return
    
    try:
        print(f"Saving processed data to {output_path}")
        df.to_csv(output_path, index=False)
        print(f"Processed data saved successfully to {output_path}.")
    except Exception as e:
        print(f"Error saving data: {e}")
