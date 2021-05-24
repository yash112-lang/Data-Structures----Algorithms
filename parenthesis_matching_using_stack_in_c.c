# include <stdio.h>
# include <stdlib.h>

struct Stack{
    int top;
    int size;
    char *arr;
};

struct Stack* createStack(int size) {
    struct Stack *stack;
    stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->size = size;
    stack->arr = (char*)malloc(size * sizeof(struct Stack));
    if(stack->arr == NULL) {
        printf("There is some error while creating stack.\n");
        return NULL;
    }
    else {
        // printf("Stack intiallized successfully.\n");
        printf("Please wait while we are checking expression for you.\n");
        return stack;
    }
}

int isEmpty(struct Stack *stack) {
    int top = stack->top;
    
    if(top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isOverflow(struct Stack *stack) {
    int size = (stack->top - 1) - stack->size;
    if(size == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void traverseStack(struct Stack *stack) {
    if(isEmpty(stack)) {
        printf("Please insert the element first!\n");
        return;
    }
    int top = stack->top;
    for(int i = top; i >= 0; i -= 1) {
        printf("%d Element is: %c\n", (top - i) + 1, stack->arr[i]);
    }
}

struct Stack * push(struct Stack *stack, char data) {
    if(isOverflow(stack)) {
        printf("Can't insert more element stack is Full!\n");
        return NULL;
    }
    else {
        // printf("Pushed %c to stack\n", data);
        stack->top += 1;
        stack->arr[stack->top] = data;
        return stack;
    }
}

int pop(struct Stack* stack) {
    char *ptr;
    char data;
    data = stack->arr[stack->top];
    ptr = &(stack->arr[stack->top]);
    free(ptr);
    stack->top -= 1;
    return data;
}

int isValidParenthesis(char *exp) {
    struct Stack *stack;
    stack = createStack(100);
    int i = 0;
    while(exp[i] != '\0') {
        if(exp[i] == '(') {
            stack = push(stack, exp[i]);
        }
        else if(exp[i] == ')') {
            if(!isOverflow(stack)) {
                pop(stack);
            }
        }
        i += 1;
    }
    if(stack->top == -1) {
        printf("Valid parenthesis.\n");
        return 1;
    }
    else {
        printf("Invalid parenthesis.\n");
        return 0;
    }
    

}


int main()
{
    char *arr = "(a+b(a*b)(a)(b)())";
    isValidParenthesis(arr);

    return 0;
}