# src/utils.py

print("utils.py is being loaded")

def some_function(data):
    """
    Example function to print out processed data.
    """
    print("Data processed:")
    print(data.head())  # Assuming data is a Pandas DataFrame, print the first few rows.
