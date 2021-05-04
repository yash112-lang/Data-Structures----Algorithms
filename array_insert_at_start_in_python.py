size = int(input("Enter size of array: "))
arr = []


def traverseArray(arr):
    for i in range(len(arr)):
        print(arr[i])



def insertAtStart(arr, number):
    arr.insert(0, number)

for i in range(size):
    arr.append(input('Enter number: '))




traverseArray(arr)
insertAtStart(arr, 5)
traverseArray(arr)


