class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

def traveseLinkedList(l1):
    while l1.next != None:
        print(l1.value)
        l1 = l1.next
    print(l1.value)

l1 = LinkedList()

l1.head = Node(1)
l2 = Node(2)
l3 = Node(3)
l4 = Node(4)

l1.head.next = l2
l2.next = l3
l3.next = l4


traveseLinkedList(l1.head)