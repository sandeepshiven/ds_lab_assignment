#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Aug 14 16:58:23 2019

@author: sandeep
"""

def insert_val(arr):
    num = int(input("Enter the number you want to insert: "))
    index = int(input("Enter the index at which you want to insert: "))
    arr.insert(index,num)
    
    
def delete_val(arr):
    index = int(input("Enter the index you want to delete: "))
    arr.pop(index)
    












size = int(input("Enter the size of the array: "))


print("Enter the elements of the array")

arr = []

for i in range(size):
    num = int(input())
    arr.append(num)
    
choice = int(input("Do you want to\n1. insert \n2. delete\n"))

if choice == 1:
    insert_val(arr)
    
elif choice == 2:
    delete_val(arr)
    
else :
    print("Invalid selection")

print(arr)























