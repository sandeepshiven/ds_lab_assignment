

def binary_search(arr,element,lower,upper):
    mid = int((lower + upper)/2)
    
    if arr[mid] == element:
        return mid
    elif element < arr[mid]:
        return binary_search(arr,element,lower,mid-1)
    elif element > arr[mid]:
        return binary_search(arr,element,mid+1,upper)
     
    return -1





















size = int(input("Enter the size of the aray: "))
print("Enter the elements of the array")
arr = []

for i in range(size):
    num = int(input())
    arr.append(num)

arr.sort()

print("Sorted array is :",arr)

element = int(input("Enter the element you want to search: "))

print("The element you searched is at index:",binary_search(arr,element,0,size-1))














