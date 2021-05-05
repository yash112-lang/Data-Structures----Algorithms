# include <stdio.h>
# include <stdlib.h>

void traverseArray(int *ptr, int size){
    for(int i = 0; i < size; i++){
        printf("%d element is %d\n", i, ptr[i]);
    }
}

int *insertAtIndex(int *ptr, int *size, int index, int data){
    int *arr;
    *size += 1;
    int i = 0;
    int j = 0;

    arr =(int *)malloc((*size) * sizeof(int));
    
    if(arr == NULL){
        printf("Unable to allocate memory.\n");
        exit(1);
    }
    if(index == 0){
        printf("Inside if  for checking 0 index.\n");
        arr[0] = data;
        for(int i = 0; i < *size; i++){
            arr[i+1] = ptr[i];
        }
    }
    else if(index > *size){
        while(i < *size){
        arr[i] = ptr[i];
        i += 1;
    }
    
    arr[i-1] = data;
    }
    else{
        while(i < *size){
            arr[i] = ptr[j];
            i += 1;
            j += 1;
            if(i == index){
                arr[i] = data;
                i += 1;
            }
        }
    }
    free(ptr);
    return arr;
}

int main()
{
    int *ptr;
    int size;

    ptr = (int *)malloc(size * sizeof(int));

    if(ptr == NULL){
        printf("Unable to allocate memory.");
        return 0;
    }

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter array: \n");

    for(int i = 0; i < size; i++){
        scanf("%d", &ptr[i]);
    }

    traverseArray(ptr, size);
    ptr = insertAtIndex(ptr, &size, 10, 5);
    traverseArray(ptr, size);

    
    return 0;
}