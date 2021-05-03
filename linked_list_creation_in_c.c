# include <stdio.h>
# include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
} LinkedList;

int main()
{
    LinkedList* l1, *l2, *l3, *l4;
    /* LinkedList* l2;
    LinkedList* l3;
    LinkedList* l4; */

    l1 = (struct node*)malloc(sizeof(struct node));
    l2 = (struct node*)malloc(sizeof(struct node));
    l3 = (struct node*)malloc(sizeof(struct node));
    l4 = (struct node*)malloc(sizeof(struct node));

    l1->value = 34;
    l1->next = l2;

    l2->value = 34;
    l2->next = l3;

    l3->value = 34;
    l3->next = l4;

    l4->value = 34;
    l4->next = NULL;

    printf("%d\n", l1->value);
    return 0;
}