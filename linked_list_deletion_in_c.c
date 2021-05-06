# include <stdio.h>
# include <stdlib.h>

struct linkedList{
    int value;
    struct linkedList* next;
};


void traveseLinkedList(struct linkedList* head){
    printf("%d\n", head->value);
    do
    {
        head = head->next;
        printf("%d\n", head->value);
    } while (head->next != NULL);
}

struct linkedList *deleteAtStart(struct linkedList *head){
    struct linkedList *ptr;
    ptr = (struct linkedList *)malloc(sizeof(struct linkedList));
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct linkedList *deleteAtEnd(struct linkedList *head){
    struct linkedList *ptr1;
    ptr1 = (struct linkedList *)malloc(sizeof(struct linkedList));
    ptr1 = head;
    do
    {
        head = head->next;
    } while ((head->next)->next != NULL);
    struct linkedList *ptr;
    ptr = (struct linkedList *)malloc(sizeof(struct linkedList));
    ptr = head->next;
    head->next = NULL;
    free(ptr);
    return ptr1;
}

struct linkedList *deleteAtIndex(struct linkedList *head, int index){
    if(index < 1){
        return deleteAtStart(head);
    }
    else if(index > 3){
        return deleteAtEnd(head);
    }
    int i = 0;
    struct linkedList *ptr;
    ptr = (struct linkedList *)malloc(sizeof(struct linkedList));
    ptr = head;
    struct linkedList *ptr1;
    ptr1 = (struct linkedList *)malloc(sizeof(struct linkedList));
    ptr1 = head->next;

    while(i != (index-1)){
        ptr = ptr->next;
        ptr1 = ptr1->next;
        i += 1;
    }
    ptr->next = ptr1->next;
    free(ptr1);
    return head;
}

int main()
{
    struct linkedList *l1;
    struct linkedList* l2;
    struct linkedList* l3;
    struct linkedList* l4;
    l1 = (struct linkedList*)malloc(sizeof(struct linkedList));
    l2 = (struct linkedList*)malloc(sizeof(struct linkedList));
    l3 = (struct linkedList*)malloc(sizeof(struct linkedList));
    l4 = (struct linkedList*)malloc(sizeof(struct linkedList));

    l1->value = 1;
    l1->next = l2;

    l2->value = 2;
    l2->next = l3;

    l3->value = 3;
    l3->next = l4;

    l4->value = 4;
    l4->next = NULL;

    traveseLinkedList(l1);
    l1 = deleteAtIndex(l1, 3);
    traveseLinkedList(l1);
    return 0;
}