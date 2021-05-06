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

def deleteAtStart(head):
    l = head
    while(l.next != head):
        l = l.next
    l.next = head.next
    return l.next

def deleteAtEnd(head):
    l = head
    while((l.next).next != head):
        l = l.next
    l.next = head
    return head

def deleteAtIndex(head, index):
    if(index < 1):
        return deleteAtStart(head)
    elif(index > 3):
        return deleteAtEnd(head)
    ptr = head
    ptr2 = head.next
    count = 0
    while(count != index-1):
        ptr = ptr.next
        ptr2 = ptr2.next
        count += 1
    ptr.next = ptr
    ptr.next = ptr2.next
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
l1 = deleteAtIndex(l1, 3)
traverseLinkedList(l1)
