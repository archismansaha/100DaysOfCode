
import  pandas

student_dict={
    "student":["Anjo","james","asasas"],
    "score":[12,123,13]
}

student_dataframe=pandas.DataFrame(student_dict)


#Loop through rows of data frame
for (index,row) in student_dataframe.iterrows():
    if row.student=='Anjo':
        print(row.score)
