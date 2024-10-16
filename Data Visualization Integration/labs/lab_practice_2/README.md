# Lab Practice 2 - Data Analysis Task

## Overview
This task analyzes manager salary data to uncover insights and trends. The project includes data loading, cleaning, processing, and generating insights through data analysis and visualizations.

## Project Structure
```
lab_practice_2/
├── venv/                # Virtual environment folder
├── src/                 # Source code folder
│   ├── __init__.py      # Empty file to make this a module
│   ├── main.py          # Main entry point for the project
│   ├── utils.py         # Helper functions (currently prints processed data for debugging)
│   └── data_processing.py # Data loading, cleaning, and processing functions
├── notebooks/           # Jupyter Notebooks for data analysis
│   └── analysis.ipynb   # Notebook containing data analysis and visualizations
├── data/                # Folder containing input/output datasets
│   ├── Manager Salary Survey.csv   # Raw input data
│   └── processed_data.csv  # Processed data (output)
├── README.md            # Project instructions and overview
├── requirements.txt     # List of Python libraries used in the project
```

## Setting Up the Environment
To run this project, you need to set up a virtual environment and install the required dependencies.

### Steps to Set Up:
1. **Create a virtual environment**: 
    - If you haven't created one, run the following command in the project root:
    ```bash
    python -m venv venv
    ```
    - Activate the virtual environment:
      - **On Windows**:
        ```bash
        .\venv\Scripts\activate
        ```
      - **On Linux/macOS**:
        ```bash
        source venv/bin/activate
        ```

2. **Install the dependencies**: 
    - After activating the virtual environment, install the required Python packages by running:
    ```bash
    pip install -r requirements.txt
    ```

## Data Processing
The data processing script (`data_processing.py`) performs the following steps:
- **Loading the data** from `Manager Salary Survey.csv`.
- **Cleaning the data** by:
  - Handling missing values (filling in with median or mode where appropriate).
  - Removing duplicates.
- **Processing salary data** by:
  - Adjusting the salary values by 5% where applicable.
  
The processed data is saved as `data/processed_data.csv`.

## Running the Project
To run the main script for data processing and saving the output, use the following command:

```bash
python -m src.main
```

Once the script is executed:
- The processed data will be saved to `data/processed_data.csv`.
- You can open this file to review the cleaned and adjusted data.

## Jupyter Notebook for Analysis
The Jupyter Notebook `analysis.ipynb` provides insights and visualizations from the processed data. Key questions answered in the notebook include:
- Which industry pays the most?
- How does salary increase with years of experience?
- How do salaries compare for the same role in different locations?
- How do salaries differ by gender and years of experience?
- How do factors like race and education level correlate with salary?
- Is there a “sweet spot” for total work experience vs. years in the specific field?

You can run this notebook to generate visualizations and further explore the dataset.

## Python Libraries
The project relies on the following Python libraries:
- `pandas` for data manipulation and cleaning
- `numpy` for numerical operations
- `seaborn` and `matplotlib` for visualizations

To install these dependencies, ensure you run:
```bash
pip install -r requirements.txt
```
```