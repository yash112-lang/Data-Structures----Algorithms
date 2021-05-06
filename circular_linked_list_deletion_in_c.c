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

struct circularLinkedList* deleteAtStart(struct circularLinkedList* head){
    struct circularLinkedList* ptr1;
    ptr1 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr1 = head;
    while(ptr1->next != head){
        ptr1 = ptr1->next;
    }
    ptr1->next = head->next;
    free(head);
    return ptr1->next;
}

struct circularLinkedList* deleteAtEnd(struct circularLinkedList* head){
    struct circularLinkedList* ptr1;
    ptr1 = (struct circularLinkedList*)malloc(sizeof(struct circularLinkedList));
    ptr1 = head;

    while((ptr1->next)->next != head){
        ptr1 = ptr1->next;
    }
    free(ptr1->next);
    ptr1->next = NULL;
    return head;
}

struct circularLinkedList* deleteAtIndex(struct circularLinkedList* head, int index){
    if(index < 1){
        return deleteAtStart(head);
    }
    else if(index > 3){
        return deleteAtEnd(head);
    }
    int count = 0;
    struct circularLinkedList* ptr = head;
    struct circularLinkedList* ptr1 = head->next;
    while(count != index-1){
        ptr = ptr->next;
        ptr1 = ptr1->next;
        count += 1;
    }
    ptr->next = ptr1->next;
    free(ptr1);
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
    l1 = deleteAtIndex(l1, 3);
    traverseLinkedList(l1);

    return 0;
}