import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from dash import Dash
from layouts.home_layout import layout

# Load and Clean Data
df = pd.read_csv("data/hotel_bookings.csv")
df['reservation_status_date'] = pd.to_datetime(df['reservation_status_date'])
df['total_nights'] = df['stays_in_weekend_nights'] + df['stays_in_week_nights']
df = df.dropna(subset=["important_column"])  # Handling missing values as needed
df = df.drop_duplicates()  # Removing duplicate rows

# Save the cleaned data as a new CSV file
df.to_csv("data/cleaned_hotel_bookings.csv", index=True)

# Exploratory Data Analysis (EDA)
# Basic summary statistics
print(df.info())
print(df.describe())
print(df.isnull().sum())

# Univariate Analysis
df['hotel'].value_counts().plot(kind='bar', title='Distribution of Hotel Types')
plt.show()
df['lead_time'].plot(kind='hist', bins=30, title='Distribution of Lead Times')
plt.show()

# Bivariate Analysis
df.plot(kind='scatter', x='lead_time', y='is_canceled', title='Lead Time vs. Cancellation')
plt.show()
df.boxplot(column='lead_time', by='hotel')
plt.title('Lead Time by Hotel Type')
plt.suptitle('')
plt.show()

# Correlation matrix
correlation_matrix = df.corr()
sns.heatmap(correlation_matrix, annot=True, cmap='coolwarm')
plt.title('Correlation Matrix')
# plt.show()

# Monthly cancellation rate
df['month'] = df['reservation_status_date'].dt.month
monthly_cancellations = df.groupby('month')['is_canceled'].mean()
monthly_cancellations.plot(kind='line', title='Monthly Cancellation Rate')
plt.show()

# Dash App Initialization (after EDA)
app = Dash(__name__)
# Continue with layout and callbacks as usual