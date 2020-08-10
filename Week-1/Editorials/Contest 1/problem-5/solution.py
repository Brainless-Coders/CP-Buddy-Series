#!/bin/python3

import math
import os
import random
import re
import sys

def rotLeft(a, d):
	#use of slicing to rotate
    return a[d:] + a[:d]

if __name__ == '__main__':
    nd = input().split()

	#collecting n and d 
    n = int(nd[0])
    d = int(nd[1])
	
	#filling into a list
    a = list(map(int, input().rstrip().split()))
    #function for rotation
    result = rotLeft(a, d)
    
    #printing output
    for z in result:
        print(str(z) + " ",end = "")
