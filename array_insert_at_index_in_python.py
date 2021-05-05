size = int(input("Enter size of array: "))
arr = []


def traverseArray(arr):
    for i in arr:
        print(i)

def insertAtIndex(arr, index, data):
    arr.insert(index, data)

for i in range(size):
    arr.append(input())

traverseArray(arr)
insertAtIndex(arr, 3, 5)
traverseArray(arr)

