from PIL import Image
import glob

import sys


#path = 'C:\Users\Sabik\PycharmProjects\Project1\image\image(1).jpg'
#files=glob.glob(path)
#im = Image.open("image/image(1).jpg") #Can be many different formats.
#print (im.bits, im.size, im.format)
#pix = im.load()

#print (im.size) #Get the width and hight of the image for iterating over
#print (pix[x,y]) #Get the RGBA Value of the a pixel of an image

import glob
path = '.\image\*.jpg'
files=glob.glob(path)
for file in files:
    f=open(file, 'r')
    sys.stdout.write(f.read())
    f.close()
    ##