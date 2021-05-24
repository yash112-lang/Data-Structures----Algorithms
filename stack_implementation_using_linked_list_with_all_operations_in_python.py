class linkedList:
    def __init__(self, data):
        self.data = data
        self.next = None

def traverseLinkedList(l1):
    while(l1.next != None):
        print(l1.data)
        l1 = l1.next
    print(l1.data)

def isEmpty(l1):
    if(l1 == None):
        return 0
    else:
        return 1

def push(l1, data):
    l5 = linkedList(data)
    l5.next = l1
    return l5

def pop(l1):
    l1 = l1.next
    return l1

l1 = linkedList(1)
l2 = linkedList(2)
l3 = linkedList(3)
l4 = linkedList(4)

l1.next = l2
l2.next = l3
l3.next = l4

traverseLinkedList(l1)
l1 = push(l1, 5)
l1 = pop(l1)
l1 = push(l1, 5)
l1 = push(l1, 5)
traverseLinkedList(l1)