# include <stdio.h>
# include <stdlib.h>

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
    for(int i = 0; i < size; i++){
        printf("%d element is: %d\n", i, ptr[i]);
    }

    return 0;
}