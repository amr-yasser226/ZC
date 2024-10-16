import os
from src.data_processing import process_data, save_processed_data

def main():
    print(f"Current working directory: {os.getcwd()}")
    
    processed_df = process_data()
    
    if processed_df is not None:
        print(f"Processed DataFrame row count: {len(processed_df)}")
        
        save_processed_data(processed_df, 'data/processed_data.csv')
        
        import pandas as pd
        saved_df = pd.read_csv('data/processed_data.csv')
        print(f"Verification: Saved DataFrame row count: {len(saved_df)}")
        
        if len(processed_df) == len(saved_df):
            print("Success: All processed rows were saved correctly.")
        else:
            print("Warning: The number of saved rows doesn't match the processed rows.")
    else:
        print("Error: Data processing failed.")

if __name__ == "__main__":
    main()