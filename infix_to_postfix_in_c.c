# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct Stack {
    int top;
    char * arr;
    int size;
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
        printf("Please wait while we are converting expression for you.\n");
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

char pop(struct Stack* stack) {
    char *ptr;
    char data;
    data = stack->arr[stack->top];
    ptr = &(stack->arr[stack->top]);
    free(ptr);
    stack->top -= 1;
    return data;
}

int isOperator(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        return 1;
    }
    else {
        return 0;
    }
}

int precedence(char ch) {
    if(ch == '+' || ch == '-') {
        return 1;
    }
    else if(ch == '*' || ch == '/') {
        return 2;
    }
    else {
        return 0;
    }
}


char *infixToPostfix(char *exp) {
    struct Stack *stack = createStack(100);
    int i = 0;
    int j = 0;
    char *postfixArr = (char *) malloc(strlen(exp + 1) * sizeof(char));
    while(exp[i] != '\0') {
        if(!isOperator(exp[i])) {
            postfixArr[j] = exp[i];
            i += 1;
            j += 1;
        }
        else {
            if(precedence(exp[i]) > precedence(stack->arr[stack->top])) {
                stack = push(stack, exp[i]);
                i += 1;
            }
            else if(precedence(exp[i]) <= precedence(stack->arr[stack->top])) {
                postfixArr[j] = pop(stack);
                j += 1;
            }
        }
    }
    while(!isEmpty(stack)) {
        postfixArr[j] = pop(stack);
        j += 1;
    }
    postfixArr[j] = '\0';
    return postfixArr;
}


int main()
{
    // char *exp = "a+b-c*d";
    // char *expression = "a-b+c/6";
    char *expression = "x-y/z + k* d";
    printf("Equivalent postfix Expression is %s", infixToPostfix(expression));
    return 0;
}