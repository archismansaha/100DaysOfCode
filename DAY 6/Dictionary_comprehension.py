#new_dict={new_key:new_value for item in list if test}
#new_dict={new_key:new_value for (key,Value) in dict.items() if test}
import random
names=["Abcd","ddadad",'dadadad','adadadadadw','dwdwdwd']
student_score={student: random.randint(1,100) for student in names }

passed_students={student:number for (student,number) in student_score.items() if number>50}

sentence = "What is the velocity of water in thr tub?"
sentence_split=sentence.split()
sentence_dict={word: len(word) for word in sentence_split}

weather_c={
    "Monday":12,
    "Tuesday":14,
    "wednesday":15,
    "Thursday":21,
}
new_dict={day:((temp*9/5)+32) for (day,temp) in weather_c.items()}
print(new_dict)