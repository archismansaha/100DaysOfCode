import pandas

data = pandas.read_csv("2018_Central_Park_Squirrel_Census_-_Squirrel_Data.csv")
grey_count=len(data[data["Primary Fur Color"]=="Gray"]) # give the length of the row which has color gray
red_count=len(data[data["Primary Fur Color"]=="Cinnamon"])
balck_count=len(data[data["Primary Fur Color"]=="Black"])
print(grey_count)
print(red_count)
print(balck_count)

data_dict={
    "Fun Color":["Gray","Cinnamon","Black"],
    "Count":[grey_count,red_count,balck_count]
}
dataf=pandas.DataFrame(data_dict) #getting hold of csv to get hold od data frame
dataf.to_csv("data.csv")

