"""
problem on buble sort
"""

list1 = [66,57,54,53,64,52,59]
print(len(list1))

for i in range(len(list1)):
	for j in range(len(list1)-i-1):
		if list1[j] > list1[j+1]:
			list1[j],list1[j+1] = list1[j+1],list1[j]
			
print(list1)