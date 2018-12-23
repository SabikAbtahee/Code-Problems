import os
import csv
import sys
import numpy as np
import pandas as pan
from PIL import Image



def main():
    colorfuldir=os.listdir('./image/')
    mask=os.listdir('./mask/')
    skincount = np.zeros((256,256,256,2))
    sys.stdout = open('data.txt', 'w')
    for i in range(0,len(colorfuldir),1):
        if(i==46): continue
        colorOpen = Image.open('./image//' + colorfuldir[i], 'r')
        colorOpen=colorOpen.convert('RGB')
        colorImage = list(colorOpen.getdata())

        maskOpen = Image.open('./mask//' + mask[i], 'r')
        maskOpen=maskOpen.convert('RGB')
        maskImage = list(maskOpen.getdata())
        for j in range(0,len(maskImage),1):
            if (maskImage[j][0]<100 and maskImage[j][1]<100 and maskImage[j][2]<100):
                skincount[colorImage[j][0]][colorImage[j][1]][colorImage[j][2]][0]+=1
            else:
                skincount[colorImage[j][0]][colorImage[j][1]][colorImage[j][2]][1]+=1

    with open('ALLDATA.csv', 'w', newline='') as csvfile:
        fieldnames = ['R', 'G', 'B','VALUE']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
    for a in range(0,256,1):
        for b in range(0,256,1):
            for c in range(0,256,1):
                    #print("Skincount of",a,b,c,":",skincount[a][b][c],"NON: ",skincount[a][b][c])
                    x=skincount[a][b][c][0]-skincount[a][b][c][1]
                    if(x>0):
                        writer.writerow({'R': str(a), 'G': str(b), 'B': str(c),'VALUE' :'0'})
                    else:
                        writer.writerow({'R': str(a), 'G': str(b), 'B': str(c), 'VALUE': '1'})






'''
                    if(x>0.5):
                        myData.append([a,b,c,x])
                    with open('name.csv') as csvfile:
                        reader = csv.DictReader(csvfile)
                    for row in reader:
                        print(row['first_name'], row['last_name'])

                    if(skincount[a][b][c][0]>0.0):
                        print("Pixel: ",a,b,c," SKIN")
                    else:
                        print("Pixel: ",a,b,c,"NON-SKIN")

                        myData = [["first_name", "second_name", "Grade"],
                                  ['Alex', 'Brian', 'A'],
                                  ['Tom', 'Smith', 'B']]

                        myFile = open('example2.csv', 'w')
                        with myFile:
                            writer = csv.writer(myFile)
                            writer.writerows(myData)
        
        
        
        
        
        
        
        
        
        
        
           # print(mask[44])
   # print(colorfuldir[12])
   # )
        
    #for i in range(0,len(mask),1):
     #  maskOpen = Image.open('./mask//' + mask[i], 'r')
      # maskImage = list(maskOpen.getdata())
       #print (maskImage[0])
    #print("ASD")
   
   
    '''
if __name__ == "__main__":
    main()