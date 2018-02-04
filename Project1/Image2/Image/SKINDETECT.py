import os
import csv
import sys
import numpy as np
import pandas as pan
from PIL import Image




def readImage(whitecount,blackcount):

    colorfuldir = os.listdir('./image/')
    mask = os.listdir('./mask/')
    for i in range(0,len(colorfuldir),1):
        colorOpen = Image.open('./image//' + colorfuldir[i], 'r')
        colorOpen = colorOpen.convert('RGB')
        colorImage = list(colorOpen.getdata())
        #allColorImage.append(colorImage)
        maskOpen = Image.open('./mask//' + mask[i], 'r')
        maskOpen = maskOpen.convert('RGB')
        maskImage = list(maskOpen.getdata())
        #allMaskImage.append(maskImage)
        #print(len(maskImage))
        for j in range(0,len(maskImage),1):
            if(maskImage[j][0]<100 and maskImage[j][1]<100 and maskImage[j][2]<100 ):
                blackcount[colorImage[j][0]][colorImage[j][1]][colorImage[j][2]]+=1
            else:
                whitecount[colorImage[j][0]][colorImage[j][1]][colorImage[j][2]]+=1

    return whitecount , blackcount



def getProbability(whitecount,blackcount):
    probabilities=list(whitecount/(blackcount+whitecount))
    return probabilities

def main():
    whitecount = np.zeros((256, 256, 256))
    blackcount = np.zeros((256, 256, 256))
    probabilities=np.zeros((256, 256, 256))
    whitecount,blackcount=readImage(whitecount,blackcount)
    #whitecount,blackcount=measurePixels(allColorImage,allMaskImage,whitecount,blackcount)
    probabilities=getProbability(whitecount,blackcount)
    print(probabilities)
if __name__ == "__main__":
    main()