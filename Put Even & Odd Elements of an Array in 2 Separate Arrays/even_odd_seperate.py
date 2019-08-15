#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Aug 14 16:40:33 2019

@author: sandeep
"""

def even(n):
    return n%2 == 0
    
size = int(input("Enter the size of the array: "))
arr =[]
print("Enter the elements of the array")

for i in range(size):
    num = int(input())
    arr.append(num)
    
print("Array of even numbers is:\n",list(filter(even,arr)))

print("Array of odd numbers is:\n",[x for x in arr if even(x) == False])















