class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


def traverseLinkedList(head):
    while(head.next != None):
        print(head.value)
        head = head.next
    print(head.value)

def deleteAtIndex(head, index):
    ptr = head
    ptr1 = head.next
    i = 0
    if(index < 1):
        head = head.next
        return head
    elif(index > 3):
        while((head.next).next != None):
            head = head.next
        head.next = None
        return ptr
    while(i != index-1):
        head = head.next
        ptr1 = ptr1.next
        i += 1
    head.next = ptr1.next
    return ptr
    




l1 = LinkedList(1)
l2 = LinkedList(2)
l3 = LinkedList(3)
l4 = LinkedList(4)

l1.next = l2
l2.next = l3
l3.next = l4

traverseLinkedList(l1)
l1 = deleteAtIndex(l1, 3)
traverseLinkedList(l1)