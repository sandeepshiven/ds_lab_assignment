#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 18:20:28 2019

@author: sandeep
"""

size = int(input("Enter the size of the array: "))
arr = []

for i in range(size):
    num = int(input())
    arr.append(num)
    
arr.sort()

print("Biggest element: {}\nSmallest element: {}".format(arr[-1],arr[0]))