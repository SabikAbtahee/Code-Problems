import os
import numpy as np

from PIL import Image
colorfuldir=os.listdir('./image/')
mask=os.listdir('./mask/')
skincount = np.zeros((257,257,257,2))
proportion=np.zeros((257,257,257))

#for a in range(0,256,1):
 #  for b in range(0, 256, 1):
    #   for c in range(0, 256, 1):
     #     skincount[a][b][c][0]=0
       #   skincount[a][b][c][1]=0
print(colorfuldir)

for i in range(0,len(colorfuldir),1):
    im2 = Image.open('./mask//' + mask[i], 'r')
    maskImage = list(im2.getdata())
    im = Image.open('./image//' + colorfuldir[i], 'r')
    mainImage = list(im.getdata())
    for j in range(0,len(maskImage),1):
        print(maskImage[j][0],maskImage[j][1],maskImage[j][2])
        #sum=float(maskImage[j][0]+maskImage[j][1]+maskImage[j][2])/3
       # if(sum>150.0):
         #   skincount[(mainImage[j][0])][(mainImage[j][1])][(mainImage[j][2])][0]+=1
       # elif (sum <= 150.0):
        #    skincount[(mainImage[j][0])][(mainImage[j][1])][(mainImage[j][2])][1]+= 1


for a in range(0,256,1):
     for b in range(0, 256, 1):
        for c in range(0, 256, 1):
             proportion[a][b][c]=float(int(skincount[a][b][c][0])/(int(skincount[a][b][c][1])+1))
             print(proportion[a][b][c])





#print (mainImage)

#im=Image.open('./image/image (1).jpg','r')
#im=Image.open('./image/image (1).jpg','r')
