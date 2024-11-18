# Hotel Booking Analysis Dashboard

This project is a comprehensive data visualization tool built using Dash and Plotly. It analyzes hotel booking data to reveal trends in booking cancellations, customer behavior, demographics, and more.

---

## Project Structure
```plaintext
```markdown
lab_practice_3/
│
├── my_dash_app/           # Main application folder
│   ├── callbacks/         # Folder for Dash callbacks
│   │   └── update_home.py
│   ├── data/              # Folder for data files
│   │   ├── cleaned_hotel_bookings.csv  # Cleaned data file (optional, not included)
│   │   └── sample_hotel_bookings.csv   # Sample data file (included)
│   ├── layouts/           # Folder for layout components
│   │   └── home_layout.py
│   ├── app.py             # Main application file
│   ├── data_quality_check.py  # Script for data quality checks
│   ├── create_sample.py   # Script to generate the sample dataset
│   ├── Attributes.txt     # Description of data attributes
│   └── requirements.txt   # List of required Python packages
└── README.md              # Project documentation
```

---

## Installation and Setup

### Clone the Repository:

```bash
git clone https://github.com/amr-yasser226/lab_practice_3.git
cd lab_practice_3
```

---

### Set Up a Virtual Environment:

```bash
python -m venv env
```

- **On Linux/Mac**:
  ```bash
  source env/bin/activate
  ```
- **On Windows**:
  ```bash
  env\Scripts\activate
  ```

---

### Install Dependencies:

```bash
pip install -r requirements.txt
```

---

## Running the Application

### Using the Full or Sample Dataset

The application is designed to work with either the full dataset (`hotel_bookings.csv`) or a sample dataset (`sample_hotel_bookings.csv`). By default, the code checks for the presence of the full dataset and uses it if available. If not, it falls back to the sample dataset.

### Download the Full Dataset

- The full dataset `hotel_bookings.csv` is not included in this repository due to its size.
- You can download it from [link to the source] and place it in the `data/` folder.

### Generate a Sample Dataset

- If you want to generate a new sample dataset from the full data, run the `create_sample.py` script:
  ```bash
  python my_dash_app/create_sample.py
  ```
- This script creates a sample of 5,000 rows and saves it as `sample_hotel_bookings.csv` in the `data` folder.

---

### Running the App:

```bash
python my_dash_app/app.py
```

- The app will be available at [http://127.0.0.1:8050](http://127.0.0.1:8050) in your web browser.

---

## Data Description

The dataset contains information on hotel bookings, such as hotel type, lead time, cancellation status, number of guests, special requests, and more. See `Attributes.txt` for a detailed description of each data attribute.

---

## Visualizations and Insights

The dashboard includes the following visualizations:

1. **Booking Trends**: Analyze trends in booking cancellations over time.
2. **Lead Time Analysis**: Compare lead times between city hotels and resort hotels.
3. **Special Requests Correlation**: See how special requests relate to booking cancellations.
4. **Repeat Guests**: Assess whether repeat guests are more or less likely to cancel.
5. **Market Segment Analysis**: Identify which booking channels have the highest cancellation rates.
6. **Room Type Analysis**: Compare reserved vs. assigned room types and guest preferences.
7. **Demographics**: Visualize guest origin and meal preferences.
8. **Children and Babies Impact**: Examine cancellation rates based on the number of children and babies.
9. **Car Parking Demand**: Analyze the demand for car parking spaces across customer types.

---

## Generating the Sample Dataset

- The `create_sample.py` script can be used to generate a sample dataset from the full `hotel_bookings.csv` file.
- **Usage**: Run the script to create a sample of 5,000 rows for testing and demonstration purposes.
  ```bash
  python my_dash_app/create_sample.py
  ```
- The sample dataset will be saved as `sample_hotel_bookings.csv` in the `data` folder.

---

## Acknowledgments

- Dataset Source:
- Libraries: Dash, Plotly, Pandas, NumPy, Matplotlib
```