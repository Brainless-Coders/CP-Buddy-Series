#!/bin/python3
import math
import sys

def lowestTriangle(base, area):
    return math.ceil(2*area/base)

base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)
