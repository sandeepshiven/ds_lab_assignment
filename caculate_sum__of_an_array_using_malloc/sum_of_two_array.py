#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 16:00:09 2019

@author: sandeep
"""

size1 = int(input("Enter the number of elements in first array: "))
list1 = []
print("Enter the elements of first array")
for i in range(size1):
    num = int(input())
    list1.append(num)


size2 = int(input("Enter the number of elements in second array: "))
list2 = []
print("Enter the elements of second array")
for i in range(size2):
    num = int(input())
    list2.append(num)

print("Sum of two arrays is: ",((sum(list1))+(sum(list2))))