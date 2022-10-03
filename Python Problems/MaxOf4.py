# WAP to create a function max() which is used to find largest among two
# integers. Use this to find largest among 4

def max(x , y):
    if x>=y:
        return x
    else:
        return y

a,b,c,d = map(int, input("Enter 4 numbers-").split())

z = max(a,max(b,max(c,d)))
print("Max number -",z);
