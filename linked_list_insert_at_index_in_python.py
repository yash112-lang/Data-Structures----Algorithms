    class LinkedList:
        def __init__(self, value):
            self.value = value
            self.next = None


    def traverseLinkedList(head):
        while(head.next != None):
            print(head.value)
            head = head.next
        print(head.value)

    def insertAtIndex(head, data, index):
        ptr = LinkedList(data)
        if(index == 0):
            ptr.next = head
            return ptr
        ptr1 = head
        ptr2 = head.next
        count = 0
        while(count != index-1):
            ptr1 = ptr1.next
            ptr2 = ptr2.next
            count += 1
            if(ptr1.next == None):
                ptr1.next = ptr
                return head
        ptr1.next = ptr
        ptr.next = ptr2
        return head




    l1 = LinkedList(1)
    l2 = LinkedList(2)
    l3 = LinkedList(3)
    l4 = LinkedList(4)

    l1.next = l2
    l2.next = l3
    l3.next = l4

    traverseLinkedList(l1)
    l1 = insertAtIndex(l1, 5, 2)
    traverseLinkedList(l1)