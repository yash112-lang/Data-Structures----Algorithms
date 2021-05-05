# include <stdio.h>
# include <stdlib.h>

void traverseArray(int *ptr, int size){
    for(int i = 0; i < size; i ++){
        printf("%d element is %d\n", i, ptr[i]);
    }
}

int *insertAtEnd(int *ptr, int *size, int data){
    int *arr;
    *size += 1;
    int i = 0;
    arr = (int *)malloc((*size) * sizeof(int));
    if(arr == NULL){
        printf("Unable to allocate memory.");
        exit(1);
    }


    while(i < *size){
        arr[i] = ptr[i];
        i += 1;
    }
    
    arr[i-1] = data;
    free(ptr);
    return arr;

}

int main()
{
    int *ptr;
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size * sizeof(int));
    if(ptr == NULL){
        printf("Unable to allocate memory.");
        return 0;
    }

    printf("Enter array digits: \n");
    for(int i = 0; i < size; i ++){
        scanf("%d", &ptr[i]);
    }

    traverseArray(ptr, size);
    ptr = insertAtEnd(ptr, &size, 5);
    traverseArray(ptr, size);
    return 0;
}