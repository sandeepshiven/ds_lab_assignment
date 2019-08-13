#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 18:46:30 2019

@author: sandeep
"""

size = int(input("Enter the size of the array: "))
arr = []

for i in range(size):
    num = int(input())
    arr.append(num)
    
arr = [x for x in set(arr)]
arr.sort()
#print(arr)
print(f"The second largest and second smallest numbers are: {arr[-2]} and {arr[1]}")