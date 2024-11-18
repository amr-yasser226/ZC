import pandas as pd

original_df = pd.read_csv("data/hotel_bookings.csv")

pd.set_option('display.max_rows', None)

print("Missing Values in Each Column:\n", original_df.isnull().sum())

num_duplicates = original_df.duplicated().sum()
print("\nNumber of Duplicate Rows:", num_duplicates)

numerical_columns = original_df.select_dtypes(include=['int64', 'float64']).columns
for column in numerical_columns:
    Q1 = original_df[column].quantile(0.25)
    Q3 = original_df[column].quantile(0.75)
    IQR = Q3 - Q1
    outliers = ((original_df[column] < (Q1 - 1.5 * IQR)) | (original_df[column] > (Q3 + 1.5 * IQR))).sum()
    print(f"Number of Outliers in {column}: {outliers}")

print("\nNegative Values in Columns (if any):")
print(original_df[(original_df['adults'] < 0) | (original_df['children'] < 0) | (original_df['babies'] < 0)])

print("\nData Types of Each Column:\n", original_df.dtypes)

print("\nAnalysis of 'market_segment' Column:")

missing_market_segment = original_df['market_segment'].isnull().sum()
print("\nMissing Values in 'market_segment':", missing_market_segment)

unique_market_segments = original_df['market_segment'].unique()
print("\nUnique Values in 'market_segment':", unique_market_segments)

market_segment_counts = original_df['market_segment'].value_counts()
print("\nOccurrences of Each Value in 'market_segment':\n", market_segment_counts)

unexpected_values = original_df[original_df['market_segment'].str.lower().str.contains('undefined|nan', na=False)]
print("\nRows with 'Undefined' or Unexpected Values in 'market_segment' (First 5 Rows):\n", unexpected_values.head(5))

print("\nAnalysis of Room Type Columns:")

unique_reserved_rooms = original_df['reserved_room_type'].unique()
unique_assigned_rooms = original_df['assigned_room_type'].unique()
print("\nUnique Values in 'reserved_room_type':", unique_reserved_rooms)
print("Unique Values in 'assigned_room_type':", unique_assigned_rooms)

reserved_room_counts = original_df['reserved_room_type'].value_counts()
assigned_room_counts = original_df['assigned_room_type'].value_counts()
print("\nOccurrences of Each Value in 'reserved_room_type':\n", reserved_room_counts)
print("\nOccurrences of Each Value in 'assigned_room_type':\n", assigned_room_counts)

print("\nAnalysis of 'meal' and 'country' Columns:")

missing_meal = original_df['meal'].isnull().sum()
missing_country = original_df['country'].isnull().sum()
print("\nMissing Values in 'meal':", missing_meal)
print("Missing Values in 'country':", missing_country)

unique_meals = original_df['meal'].unique()
unique_countries = original_df['country'].unique()
print("\nUnique Values in 'meal':", unique_meals)
print("Unique Values in 'country':", unique_countries)

meal_counts = original_df['meal'].value_counts()
country_counts = original_df['country'].value_counts()
print("\nOccurrences of Each Value in 'meal':\n", meal_counts)
print("\nOccurrences of Each Value in 'country':\n", country_counts)

unexpected_meal_values = original_df[original_df['meal'].str.lower().str.contains('undefined|nan', na=False)]
print("\nRows with 'Undefined' or Unexpected Values in 'meal' (First 5 Rows):\n", unexpected_meal_values.head(5))
