import  pandas

data = pandas.read_csv("nato_phonetic.csv")

phonetic_dict={row.letter: row.code for (index,row) in data.iterrows()}

name=input("Enter a word:").upper()
words=[phonetic_dict[word] for word in name]
print(words)