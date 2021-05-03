class Node:
    def __init__(self, data):
        self.value = data
        self.next = None


def traverseLinkedList(l1):
    while(l1.next != None):
        print(l1.value)
        l1 = l1.next
    print(l1.value)

def insertAtStart(head, data):
    ptr = Node(data)
    ptr.next = head
    return ptr

l1 = Node(1)
l2 = Node(2)
l3 = Node(3)
l4 = Node(4)

l1.next = l2
l2.next = l3
l3.next = l4

traverseLinkedList(l1)
l1 = insertAtStart(l1, 5)
traverseLinkedList(l1)
