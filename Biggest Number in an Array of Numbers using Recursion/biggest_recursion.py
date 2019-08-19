# -*- coding: utf-8 -*-
"""
Created on Mon Aug 19 18:30:14 2019

@author: sandeep
"""

def biggest(arr,lower,upper,index):
    if lower < upper:
        if arr[index] < arr[lower +1]:
            index = lower + 1
            return biggest(arr,lower + 1,upper,index)
        else:
            return biggest(arr,lower +1,upper,index)
        
    else:
        return index












size = int(input("Enter the size of the array: "))
print("Enter the elements of the array")

arr = []

for i in range(size):
    num= int(input())
    arr.append(num)
    
big = biggest(arr,0,size-1,0)

print(f"The biggest number in the array is {arr[big]}")
















