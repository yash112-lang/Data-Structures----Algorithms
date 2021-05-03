# include <stdio.h>
# include <stdlib.h>
# include <math.h>


int main()
{
int binarySearch(int data[], int element, int size){
    int low = -1;
    int high = size;
    while(low < high-1){
        int mid = floor((low + high) / 2);
        if(element == data[mid]){
            return mid;
        }
        else if(element < data[mid]){
            high = mid;
        }
        else if(element > data[mid]){
            low = mid;
        }
    }
    return -1;
}
    int element = 1;
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 22, 31, 42, 51, 52, 55, 56, 57, 58, 59, 82, 83, 84};
    int size = sizeof(data)/sizeof(data[0]);
    int search = binarySearch(data, element, size);
    printf("--------------------------------------Binary Search------------------------------------------------------\n");
    if(search >= 0){
        printf("Element found at index %d\n", search);
    }
    else{
        printf("Element not found.");
    }
    return 0;
}