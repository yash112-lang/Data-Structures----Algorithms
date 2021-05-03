class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None

def traverseLinkedList(head):
    while(head.next != None):
        print(head.value)
        head = head.next
    print(head.value)

def insertAtEnd(head, data):
    ptr1 = LinkedList(data)
    ptr1.next = None
    ptr = head
    while(ptr.next != None):
        ptr = ptr.next
    ptr.next = ptr1
    return head


l1 = LinkedList(1)
l2 = LinkedList(2)
l3 = LinkedList(3)
l4 = LinkedList(4)

l1.next = l2
l2.next = l3
l3.next = l4

traverseLinkedList(l1)
l1 = insertAtEnd(l1, 5)
traverseLinkedList(l1)