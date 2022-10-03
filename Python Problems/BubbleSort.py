# WAP to accept an integer array from user and sort it in ascending order

import array as arr

a = arr.array("i",[])

n = int(input("Enter number of elements -"))
for i in range(0,n):
    ele = int(input("Enter Number -"))
    a.append(ele)

for i in range(0,n):
    for j in range(0,n-i-1):
        if a[j] > a[j+1]:
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp

print("Sorted Array -")
for i in range(0,n):
    print(a[i])

