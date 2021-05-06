size = int(input("Enter size of array: "))
arr = []

def traverseArray(arr):
    for i in arr:
        print(i)

def deleteAtIndex(arr, index):
    if(index > (len(arr)-1)):
        arr.pop()
        return 1
    elif(index < 0):
        arr.pop(0)
        return 1
    arr.pop(index)

for i in range(size):
    arr.append(input())

traverseArray(arr)
deleteAtIndex(arr, 3)
traverseArray(arr)