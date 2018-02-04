import csv

data=[[]]
data.append(["pixel1","pixel2","pixel3","value"])
data.append([0,1,2,3])
data.append([0,1,2,3])

myFile = open('example5.csv', 'w')
with myFile:
    writer = csv.writer(myFile)
    writer.writerows(data)