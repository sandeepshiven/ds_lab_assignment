# -*- coding: utf-8 -*-
"""
Created on Mon Aug 19 18:42:21 2019

@author: sandeeep
"""
from os import system


def insert(arr):
    num = int(input("Enter the number you want to insert: "))
    arr.append(num)
    
def delete(arr):
    arr.pop(0)






again = 1
arr = []
while(again != 4):
    _= system("cls")
    again  = int(input("What do you want to do?\n1. Insert in queue\n2. Delete from queue\n3. Display queue\n4. Exit\nEnter your choice: "))
    if again == 1:
        insert(arr)
    
    elif again == 2:
        delete(arr)
        
    elif again == 3:
        print(arr)
    system("pause")























