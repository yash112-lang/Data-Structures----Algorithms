class Node:
    def __init__(self, data):
        self.value = data
        self.next = None


def traverseLinkedList(l1):
    l = l1
    while(l.next != l1):
        print(l.value)
        l = l.next
    print(l.value)

def insertAtEnd(head, data):
    ptr = Node(data)
    l = head
    while(l.next != l1):
        l = l.next
    l.next = ptr
    ptr.next = head
    return head

l1 = Node(1)
l2 = Node(2)
l3 = Node(3)
l4 = Node(4)

l1.next = l2
l2.next = l3
l3.next = l4
l4.next = l1

traverseLinkedList(l1)
l1 = insertAtEnd(l1, 5)
traverseLinkedList(l1)
