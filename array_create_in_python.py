size = int(input("Enter size of array: "))
arr = []
for i in range(size):
    arr.append(int(input()))

for i in range(size):
    print(f"{i} Element is {arr[i]}")