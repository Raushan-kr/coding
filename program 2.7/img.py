# Python code to reading an image using OpenCV 
import numpy as np 
import cv2 
  
# You can give path to the 
# image as first argument 
img = cv2.imread('cc.jpg', 0) 
  
# will show the image in a window 
cv2.imshow('image', img) 
k = cv2.waitKey(0) & 0xFF
  
