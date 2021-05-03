def binarySearch(data, element):
    low = -1
    high = len(data)
    while(low < high-1):
        mid = (low + high) // 2
        if data[mid] == element:
            return mid
        elif(element < data[mid]):
            high = mid
        elif(element > data[mid]):
            low = mid
    return -1


data = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 22, 31, 42, 51, 52, 55, 56, 57, 58, 59, 82, 83, 84]
element = 1
search = binarySearch(data, element)
print("--------------------------------------Binary Search------------------------------------------------------\n")
if(search >= 0):
    print("Element found at index", search)
else:
    print("Element not found.")