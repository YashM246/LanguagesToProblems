choice = 0
LL = []

while choice < 6:
    print(" ----- Linked List ----- ")
    print("    1 - Add Element")
    print("    2 - Remove Element")
    print("    3 - Replace Element")
    print("    4 - Search Element")
    print("    5 - Sort LL")
    print("    6 - Exit")
    choice = int(input("Enter choice ="))

    if choice == 1:
        ele = int(input("Enter element to be added ="))
        pos = int(input("Enter position of element ="))
        LL.insert(pos, ele)
        print("\nUpdated List =",LL,"\n")

    elif choice == 2:
        try:
            ele = int(input("Enter element to be removed ="))
            LL.remove(ele)
        except ValueError:
            print("Element not found")
        else:
            print("\nUpdated List =",LL,"\n")

    elif choice == 3:
        ele = int(input("Enter element to be replaced ="))
        pos = int(input("Enter element to be added at ="))
        LL.pop(pos)
        LL.insert(pos, ele)
        print("\nUpdated List =",LL,"\n")

    elif choice == 4:
        ele = int(input("Enter element to be searched ="))
        try:
            p = LL.index(ele)
            print("Element found at index =",p)
        except ValueError:
            print("Element not found")

    elif choice == 5:
        n = len(LL)
        for i in range(0,n):
            for j in range(0,n-i-1):
                if LL[j] > LL[j+1]:
                    temp = LL[j]
                    LL[j] = LL[j+1]
                    LL[j+1] = temp
        print("\nUpdated List =",LL,"\n")

    else:
        break
