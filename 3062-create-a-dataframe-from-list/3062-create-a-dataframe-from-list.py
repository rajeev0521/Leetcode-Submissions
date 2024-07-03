import pandas as pd
# from typing import list

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    student_id = [row[0] for row in student_data]
    age = [row[1] for row in student_data]

    df = pd.DataFrame({'student_id' : student_id, 'age' : age})

    return df