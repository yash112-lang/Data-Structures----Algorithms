size = int(input("Enter size of array: "))
arr = []

def traverseArray(arr):
    for i in arr:
        print(i)

def insertAtEnd(arr, data):
    arr.append(data)

for i in range(size):
    arr.append(input())

traverseArray(arr)
insertAtEnd(arr, 5)
traverseArray(arr)
