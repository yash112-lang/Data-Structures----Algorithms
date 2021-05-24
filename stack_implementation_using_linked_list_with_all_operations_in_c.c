# include <stdio.h>
# include <stdlib.h>

struct linkedList{
    int data;
    struct linkedList* next;
};



void traverseLinkedList(struct linkedList *ptr){
    while(ptr->next != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("%d\n", ptr->data);
}

int isEmpty(struct linkedList *ptr){
    if(ptr == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    struct linkedList* ptr;
    ptr = (struct linkedList *)malloc(sizeof(struct linkedList));
    if(ptr == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct linkedList* push(struct linkedList* ptr, int element){
    struct linkedList* l1;
    l1 = (struct linkedList* )malloc(sizeof(struct linkedList));
    l1->data = element;
    l1->next = ptr;
    return l1;
}

struct linkedList* pop(struct linkedList* ptr){
    int data;
    data = ptr->data;
    struct linkedList *l1;
    l1 = (struct linkedList *)malloc(sizeof(struct linkedList));
    l1 = ptr;
    ptr = ptr->next;
    free(l1);
    return ptr;
}

int main()
{
    struct linkedList *top = NULL;
    top = push(top, 3);
    top = push(top, 5);
    traverseLinkedList(top);
    printf("%d\n", isEmpty(top));
    top = pop(top);
    top = pop(top);
    // traverseLinkedList(top);
    top = push(top, 3);
    top = push(top, 5);
    traverseLinkedList(top);


    return 0;
}