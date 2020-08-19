#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the findMedian function below.
def findMedian(arr):
    if len(arr) == 0:
        return
    if(len(arr) == 1):
        return arr[0]
    arr = sorted(arr)
    return(arr[int((len(arr))/2)])
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = findMedian(arr)

    fptr.write(str(result) + '\n')

    fptr.close()

