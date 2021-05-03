def linearSearch(data, element):
    for ind, ele in enumerate(data):
        if ele == element:
            return ind
    return -1


data = [1, 2, 3, 1, 2, 1, 2, 1, 3, 2, 1, 3, 2, 1, 2, 1, 2, 1, 2, 5, 6, 7, 8, 9, 9, 0, 2]
element = 1
search = linearSearch(data, element)
print("--------------------------------------Linear Search------------------------------------------------------\n")
if(search > 0):
    print("Element is found at index: ", search)
else:
    print("Element not found.")