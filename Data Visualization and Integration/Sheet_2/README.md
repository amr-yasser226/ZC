# Book Sales Analysis Dashboard

This project is an interactive data visualization tool built using Dash and Plotly. It allows users to analyze book sales data to uncover trends and insights. The dashboard includes interactive tables and charts to support data-driven decision-making.

---

## Project Structure

```plaintext
Sheet_2/
│
├── data/                  # Folder for data files
│   └── books.csv          # Book sales dataset (to be added by the user)
│
├── env/                   # Virtual environment folder (excluded from version control)
│
├── src/                   # Main application folder
│   ├── __pycache__/       # Compiled Python files (auto-generated)
│   ├── callbacks.py       # Dash callbacks for interactivity
│   ├── charts.py          # Functions to create charts using Plotly
│   ├── dataset.py         # Functions to load and clean the dataset
│   ├── layout.py          # Layout definitions for the dashboard
│   └── main.py            # Entry point for the application
│
├── requirements.txt       # List of Python dependencies
└── README.md              # Project documentation
```

---

## Installation and Setup

### Clone the Repository

```bash
git clone https://github.com/amr-yasser226/ZC/Data Visualization and Integration/Sheet_2.git
cd Sheet_2
```

---

### Set Up a Virtual Environment

1. **Create a virtual environment:**
   ```bash
   python -m venv env
   ```

2. **Activate the virtual environment:**
   - **On Linux/Mac:**
     ```bash
     source env/bin/activate
     ```
   - **On Windows:**
     ```bash
     env\Scripts\activate
     ```

---

### Install Dependencies

Install the required Python packages:
```bash
pip install -r requirements.txt
```

---

## Running the Application

1. Place the `books.csv` file in the `data/` directory. This file should include columns relevant to the book sales analysis.
2. Run the application:
   ```bash
   python src/main.py
   ```
3. Open your browser and navigate to:
   ```
   http://127.0.0.1:8050/
   ```

---

## Data Description

The dataset (`books.csv`) should contain relevant information for analyzing book sales. It might include columns like `Genre`, `Sales`, `Author`, etc. The dashboard is built to process and display this data interactively.

---

## Features and Visualizations

The dashboard includes the following features and visualizations:

1. **Interactive Table:** Explore the dataset directly within the app.
2. **Bar Chart (Chart 1):** Displays the count of book genres using a bar chart.
3. **Future Charts:** Placeholder for additional visualizations (Chart 2 and Chart 3) that can be customized as needed.

---

## Files and Their Functions

### `main.py`
The entry point for the application. It initializes the Dash app, applies the layout, registers callbacks, and runs the server.

### `layout.py`
Defines the layout of the dashboard, including the table, charts, and radio buttons for interactivity.

### `callbacks.py`
Handles the interactive logic of the application, enabling dynamic updates to the chart based on user input.

### `charts.py`
Contains functions for generating visualizations using Plotly.

### `dataset.py`
Handles loading and cleaning the dataset. The `get_data` function reads the dataset and applies necessary preprocessing.

### `requirements.txt`
Lists all Python dependencies required to run the application. Key packages include:
- Dash
- Pandas
- Plotly
- Dash Bootstrap Components

---

## Customization

- **Dataset:** Modify or replace `books.csv` with your dataset. Ensure the data aligns with the expected structure for visualizations.
- **Charts:** Add or modify chart functions in `charts.py` to expand the dashboard's capabilities.
- **Layout:** Customize `layout.py` to include additional components or change the appearance.

---

## Excluding Files/Folders

The `__MACOSX` folder and compiled Python files (`__pycache__/`) can be ignored as they are unnecessary for the application. Add the following lines to your `.gitignore` file:

```plaintext
__MACOSX/
src/__pycache__/
env/
```

---

## Acknowledgments

- **Libraries:** Dash, Plotly, Pandas, Dash Bootstrap Components
- **Dataset:** User-provided `books.csv`
```
