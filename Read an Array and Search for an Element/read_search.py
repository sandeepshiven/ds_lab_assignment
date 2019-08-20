size = int(input("Enter the size of the array: "))
print("Enter the elements in array")

arr = []

for i in range(size):
    num = int(input())
    arr.append(num)
    
ele = int(input("Enter the element you want to search: "))


try:
    print("The element you searched is at index:",arr.index(ele))
except:
    print("The item you looked is not in the array")


























    