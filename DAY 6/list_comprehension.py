  
numbers = [1,2,3,4]

#new_list=[new_item for item in numbers]

new_list=[n+1 for n in numbers]
print(new_list)

name="Archisman"
letter_list=[letter for  letter in name]
print(letter_list)

list = [num*2 for num in range(1,5)]
print(list)

# Conditional list comprihesnsion
names=["Abcd","ddadad",'dadadad','adadadadadw','dwdwdwd']

names_new=[name.upper() for name in names if len(name)<10] #condition list comprihension
print(names_new)
