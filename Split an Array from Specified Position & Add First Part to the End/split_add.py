
size = int(input("Enter the size of the array: "))
print("Enter the elements\n")
arr = []


for i in range(size):
    num = int(input())
    arr.append(num)
    
#print(arr)
    
pos = int(input("Enter the position you want to spilt: "))

new_arr = arr[:pos].copy()
    
for i in range(pos):
    arr.pop(0)
    
    
  
arr.extend(new_arr)

print(arr)
    
    





















