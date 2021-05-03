class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None


l1 = LinkedList()
l1.head = Node(3)
l2 = Node(3)
l3 = Node(3)
l4 = Node(3)

l1.next = l2
l2.next = l3
l3.next = l4

print(l2.data)