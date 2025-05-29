## Assignment Overview

**Assignment 1: Data Security Concepts**

This repository contains solutions for a data governance course assignment focusing on key data security concepts:

1. **Hashing a Password** (SHA-256)
2. **Generating Fake Data** using the `faker` library
3. **Masking Sensitive Data** (credit card numbers)
4. **Data Anonymization** (removing identifying columns)
5. **Pseudonymization** (replacing real names with pseudonyms)

Each solution is implemented in a Jupyter Notebook (`assignment1.ipynb`) and exported to HTML (`assignment1.html`).

## Repository Structure

```
Data-Governance-Assignment-1/
├── assignment1.ipynb      # Jupyter Notebook with code and explanations
├── assignment1.html       # HTML export of the notebook
└── README.md              # This file
```

## Solution Highlights

* **Hashing**: A function to hash `"MyPassword123"` using Python's `hashlib` SHA-256, producing a secure hexadecimal digest.
* **Fake Data Generation**: Demonstrated usage of `Faker` to create realistic-looking names, emails, and addresses.
* **Masking**: A utility function that replaces all but the last four digits of a credit card number with asterisks.
* **Anonymization**: Employed pandas to drop the `Name` column from an example DataFrame, preserving only non-identifying attributes.
* **Pseudonymization**: Transformed a real user name into a pseudonym (`User<ID>`) based on the user’s ID.

## How to View and Run

1. **View the HTML**

   * Open `assignment1.html` in any web browser to see the full notebook with outputs.

2. **Run the Notebook**

   * Ensure you have Python 3 and the required dependencies installed:

     ```bash
     pip install pandas faker
     ```
   * Launch Jupyter and open `assignment1.ipynb`:

     ```bash
     jupyter notebook assignment1.ipynb
     ```
   * Run each cell to reproduce the outputs.

## Notes

* Code follows best practices for clarity and modularity.
* No AI-generated content was used in creating these solutions to comply with the assignment guidelines.

---