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

struct linkedList* insertAtIndex(struct linkedList* head, int data, int index){
    struct linkedList* ptr2;
    ptr2 = (struct linkedList*)malloc(sizeof(struct linkedList));
    ptr2->value = data;
    if(index == 0){
        ptr2->next = head;
        return ptr2;
    }
    int count = 0;
    struct linkedList* ptr = head;
    struct linkedList* ptr1 = head->next;
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
    l1 = insertAtIndex(l1, 5, 2);
    traverseLinkedList(l1);
    return 0;
}