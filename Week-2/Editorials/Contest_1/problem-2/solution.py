#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the introTutorial function below.
def introTutorial(V, arr):
    return(arr.index(V))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    V = int(input())

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = introTutorial(V, arr)

    fptr.write(str(result) + '\n')

    fptr.close()

