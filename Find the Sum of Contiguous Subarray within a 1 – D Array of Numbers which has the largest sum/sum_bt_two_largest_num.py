#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Aug 13 16:07:09 2019

@author: sandeep
"""

size = int(input("Enter the size of the array: "))
print("Enter the elements of the array")
arr = []
arr2 = []
sum_arr = 0
for i in range(size):
    num = int(input())
    arr.append(num)
    
arr2 = sorted(arr)
#arr2.sort()
largest = arr2[-1]
second_largest = arr2[-2]

#print(second_largest)

index_lar = arr.index(largest)
index_sec = arr.index(second_largest)


if index_lar > index_sec:
    for i in range(index_sec,(index_lar+1)):
        sum_arr += arr[i]

else:
    for i in range(index_lar,(index_sec+1)):
        sum_arr += arr[i]


print("The sum of integers between two largest integers {} and {} is {}".format(largest,second_largest,sum_arr))
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
