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

def insertAtStart(head, data):
    ptr = Node(data)
    l = head
    while(l.next != l1):
        l = l.next
    l.next = ptr
    ptr.next = head
    return ptr

def insertAtEnd(head, data):
    ptr = Node(data)
    l = head
    while(l.next != l1):
        l = l.next
    l.next = ptr
    ptr.next = head
    return head

def insertAtIndex(head, index, data):
    ptr = Node(data)
    if(index < 1):
        return insertAtStart(head, data)
    elif(index > 3):
        return insertAtEnd(head, data)
    ptr1 = head
    ptr2 = head.next
    count = 0
    while(count != index-1):
        ptr1 = ptr1.next
        ptr2 = ptr2.next
        count += 1
        if(ptr1.next == head):
            ptr1.next = ptr
            return head
    ptr1.next = ptr
    ptr.next = ptr2
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
l1 = insertAtIndex(l1, 3, 5)
traverseLinkedList(l1)
