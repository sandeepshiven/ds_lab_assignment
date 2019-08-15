#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Aug 14 18:40:57 2019

@author: sandeep
"""

size1 = int(input("Enter the size of the first array: "))

print("Enter the elements of the first array")
arr1 = []
for i in range(size1):
    num = int(input())
    arr1.append(num)
    
    
size2 = int(input("Enter the size of the second array: "))

print("Enter the elements of the second array")
arr2 = []
for i in range(size2):
    num = int(input())
    arr2.append(num)
    
arr1 = arr1 + arr2

print(sorted(arr1))    
    
    
    
    
    
    
    
    
    
    