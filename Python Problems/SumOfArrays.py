# WAP to accept an integer array from user and display sum of all the elements

import array as arr

a = arr.array("i",[])

n = int(input("Enter number of elements -"))
for i in range(0,n):
    ele = int(input("Enter Number -"))
    a.append(ele)

sum = 0;
for i in a:
    sum = sum+i

print("Sum of array elements -",sum)
