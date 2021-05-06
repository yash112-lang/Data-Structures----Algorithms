# include <stdio.h>
# include <stdlib.h>

struct circularLinkedList{
    int value;
    struct circularLinkedList* next;
};

void traverseCircularLinkedList(struct circularLinkedList* head){
    struct circularLinkedList* ptr;
    ptr = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr = head;
    while(ptr->next != head){
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->value);
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

int main()
{
    struct circularLinkedList *l1, *l2, *l3, *l4;
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

    traverseCircularLinkedList(l1);
    l1 = insertAtEnd(l1, 5);
    traverseCircularLinkedList(l1);

    return 0;
}