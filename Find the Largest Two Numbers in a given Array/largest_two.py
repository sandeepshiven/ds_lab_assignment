#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 18:27:35 2019

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
print(f"The biggest two numbers are: {arr[-1]} and {arr[-2]}")
