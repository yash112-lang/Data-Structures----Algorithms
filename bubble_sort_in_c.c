# include <stdio.h>

int main()
{

    void printArr(int *arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }


    int isSorted(int *arr, int size) 
    {
        for (int i = 0; i < size-1; i++) 
        {
            for (int j = 0; j < size-1-i; j++) 
            {
                if(arr[j] > arr[j+1]) 
                {
                    return 0;
                }
            }
        }
        return 1;
    }


    void bubbleSort(int *arr, int size) 
    {
        if(isSorted(arr, size)) 
        {
            return;
        }
        int temp;
        for (int i = 0; i < size-1; i++) 
        {
            for (int j = 0; j < size-1-i; j++)
            {
                if(arr[j] > arr[j+1]) 
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            
        }
    }

    int elements[] = {9, 8, 1, 2, 1, 5, 6, 7, 3, 2, 1, 10};
    // int elements[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 12;
    printArr(elements, size);
    bubbleSort(elements, size);
    printArr(elements, size);
    return 0;
}