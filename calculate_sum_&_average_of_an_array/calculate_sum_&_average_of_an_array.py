size = int(input("Enter the number of elements : "))
list1 = []
print("Enter the elements")
for i in range(size):
    num = int(input())
    list1.append(num)
    
print("Sum: " , sum(list1))
print("Average: ",(sum(list1)/size))