print("Enter a number: ")
number = int(input())
l1 = []
for i in range(1, number+1, 2):
    l1.append(i)
    
#print(l1[-1])

if l1[-1] == number:
    print("\nthe number is odd.")
elif l1[-1] != number:
    print("\nthe number is even.")