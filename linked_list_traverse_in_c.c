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
    
    /* while(head->next != NULL){
        printf("%d\n", head->value);
        head = head->next;
    }
    printf("%d\n", head->value); */
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
    return 0;
}