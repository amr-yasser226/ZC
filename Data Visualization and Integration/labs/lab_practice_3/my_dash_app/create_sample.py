import pandas as pd

full_data_path = "data/hotel_bookings.csv"
sample_data_path = "data/sample_hotel_bookings.csv"

if not pd.io.common.file_exists(full_data_path):
    print(f"Full dataset not found at {full_data_path}. Please ensure it is placed in the correct location.")
else:
    # Take a sample of 5,000 rows (or adjust as needed)
    full_df = pd.read_csv(full_data_path)
    sample_df = full_df.sample(n=5000, random_state=42)

    sample_df.to_csv(sample_data_path, index=False)
    print(f"Sample dataset created and saved to {sample_data_path}.")
