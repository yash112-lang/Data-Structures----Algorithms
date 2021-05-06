# include <stdio.h>
# include <stdlib.h>

struct circularLinkedList{
    int value;
    struct circularLinkedList* next;
};

void traverseLinkedList(struct circularLinkedList* head){
    struct circularLinkedList* ptr;
    ptr = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr = head;
    while(ptr->next != head){
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->value);
}

struct circularLinkedList* insertAtStart(struct circularLinkedList* head, int data){
    struct circularLinkedList* ptr;
    ptr = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    struct circularLinkedList* ptr1;
    ptr1 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr1 = head;
    while(ptr1->next != head){
        ptr1 = ptr1->next;
    }
    
    ptr->value = data;
    ptr->next = head;
    ptr1->next = ptr;
    return ptr;
}

struct circularLinkedList* insertAtEnd(struct circularLinkedList* head, int data){
    struct circularLinkedList* ptr;
    ptr = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    struct circularLinkedList* ptr1;
    ptr1 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr1 = head;

    while(ptr1->next != head){
        ptr1 = ptr1->next;
    }
    
    ptr->value = 5;
    ptr->next = head;
    ptr1->next = ptr;
    return head;
}

struct circularLinkedList* insertAtIndex(struct circularLinkedList* head, int index, int data){
    if(index < 1){
        return insertAtStart(head, data);
    }
    else if(index > 3){
        return insertAtEnd(head, data);
    }
    struct circularLinkedList* ptr2;
    ptr2 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr2->value = data;
    int count = 0;
    struct circularLinkedList* ptr = head;
    struct circularLinkedList* ptr1 = head->next;
    while(count != index-1){
        ptr = ptr->next;
        ptr1 = ptr1->next;
        count += 1;
        if(ptr->next == NULL){
            ptr->next = ptr2;
            ptr2->next = NULL;
            return head;
        }
    }
    ptr->next = ptr2;
    ptr2->next = ptr1;
    return head;
}

int main()
{
    struct circularLinkedList* l1, *l2, *l3, *l4;

    l1 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    l2 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    l3 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    l4 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));

    l1->value = 1;
    l1->next = l2;

    l2->value = 2;
    l2->next = l3;

    l3->value = 3;
    l3->next = l4;

    l4->value = 4;
    l4->next = l1;

    traverseLinkedList(l1);
    l1 = insertAtIndex(l1, 3, 5);
    traverseLinkedList(l1);

    return 0;
}