# include <stdio.h>
# include <stdlib.h>

struct Stack{
    int top;
    int size;
    int *arr;
};

struct Stack *createStack(int size){
    struct Stack *stack;
    stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->size = size;
    stack->arr = (int *)malloc(stack->size * sizeof(struct Stack));
    return stack;
}

int isEmpty(struct Stack *stack){
    if(stack->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Stack *stack){
    if(stack->top == (stack->size)-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct Stack *stack, int data){
    if(!(isFull(stack))){
        stack->arr[(stack->top)+1] = data;
        stack->top += 1;
    }
}

void pop(struct Stack *stack){
    if(!(isEmpty(stack))){
        stack->top -= 1;
        // stack->arr[(stack->top)--];
    }
}

int main()
{
    struct Stack *stack;
    stack = createStack(5);
    push(stack, 5);
    push(stack, 5);
    push(stack, 5);
    push(stack, 5);
    push(stack, 5);
    push(stack, 5);
    pop(stack);
    push(stack, 5);
    return 0;
}