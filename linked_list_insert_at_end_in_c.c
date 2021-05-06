# include <stdio.h>
# include <stdlib.h>

struct linkedList{
    int value;
    struct linkedList* next;
};

void traverseLinkedList(struct linkedList* head){
    while(head->next != NULL){
        printf("%d\n", head->value);
        head = head->next;
    }
    printf("%d\n", head->value);
}

struct linkedList* insertAtEnd(struct linkedList* head, int data){
    struct linkedList* ptr, *ptr1;
    ptr = (struct linkedList*)malloc(sizeof(struct linkedList));
    ptr1 = (struct linkedList*)malloc(sizeof(struct linkedList));
    ptr = head;
    ptr1->value = data;
    ptr1->next = NULL;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = ptr1;
    return head;

}
int main()
{
    struct linkedList *l1, *l2, *l3, *l4;
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

    traverseLinkedList(l1);
    l1 = insertAtEnd(l1, 5);
    traverseLinkedList(l1);

    return 0;
}