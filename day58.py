import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    
    # Remove duplicate salaries and sort in descending order
    salaries = employee['salary'].drop_duplicates().sort_values(ascending=False)
    
    # Check if second highest salary exists
    if len(salaries) < 2:
        return pd.DataFrame({'SecondHighestSalary': [None]})
    
    # Return second highest salary
    return pd.DataFrame({'SecondHighestSalary': [salaries.iloc[1]]})