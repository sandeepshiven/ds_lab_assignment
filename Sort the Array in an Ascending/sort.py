#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Aug 14 18:38:47 2019

@author: sandeep
"""

size = int(input("Enter the size of the array: "))

print("Enter the elements of the array")
arr = []
for i in range(size):
    num = int(input())
    arr.append(num)
    
print("Sorted array\n",sorted(arr))