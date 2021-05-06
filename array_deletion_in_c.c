# include <stdio.h>
# include <stdlib.h>


void traverseArray(int *ptr, int size){
    for(int i = 0; i < size; i ++){
        printf("%d element is %d\n", i, ptr[i]);
    }
}

int deleteAtStart(int *ptr, int *size){
    for(int i = 0; i < *size; i ++){
        ptr[i] = ptr[i + 1];
    }
    *size -= 1;
    ptr = (int *)realloc(ptr, ((*size) * sizeof(int)));
    return 1;
}

int deleteAtEnd(int *ptr, int *size){
    *size -= 1;
    ptr = (int *)realloc(ptr, ((*size) * sizeof(int)));
    return 1;
}

int deleteAtIndex(int *ptr, int *size, int index){
    if(index > *size){
        deleteAtEnd(ptr, size);
        return 1;
    }

    else if(index < 0){
        deleteAtStart(ptr, size);
        return 1;
    }
    for(int i = index-1; i < *size; i ++){
        ptr[i] = ptr[i + 1];
    }
    *size -= 1;
    ptr = (int *)realloc(ptr, ((*size) * sizeof(int)));
    return 1;
}


int main()
{
    int size;
    int* ptr;
    printf("Enter size of array: ");
    scanf("%d\n", &size);

    ptr = (int*)malloc(size * sizeof(int));
    if(ptr == NULL){
        printf("Unable to allocate memory");
        return 0;
    }

    for(int i = 0; i < size; i++){
        scanf("%d", &ptr[i]);
    }

    traverseArray(ptr, size);
    // deleteAtStart(ptr, &size);
    // traverseArray(ptr, size);
    // deleteAtEnd(ptr, &size);
    // traverseArray(ptr, size);
    deleteAtIndex(ptr, &size, -2);
    traverseArray(ptr, size);

    return 0;
}