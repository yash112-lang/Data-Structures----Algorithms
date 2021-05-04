# include <stdio.h>
# include <stdlib.h>

void traverseArray(int *ptr, int size){
    for(int i = 0; i < size; i++){
        printf("%d element is %d\n", i, ptr[i]);
    }
}

int* insertAtStart(int *ptr, int data, int size){
    int *arr;
    arr = (int *)malloc((size+1)* sizeof(int));
    arr[0] = data;
    for(int i = 0; i < size+1; i++){
        arr[i+1] = ptr[i];
    }
    free(ptr);
    return arr;
}
int main()
{
    int size;
    int *ptr;
    printf("Enter size of array: ");
    scanf("%d", &size);

    ptr = malloc(size * sizeof(int));
    if(ptr == NULL){
        printf("Unable to allocate memory.");
        return 0;
    }

    for(int i = 0; i < size; i++){
        scanf("%d", &ptr[i]);
    }
    traverseArray(ptr, size);
    ptr = insertAtStart(ptr, 5, size);
    traverseArray(ptr, size+1);
    return 0;
}