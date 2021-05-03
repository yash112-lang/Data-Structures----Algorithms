#include <stdio.h>

int main()
{
    int linearSearch(int data[], int element, int size)
    {
        for (int i = 0; i < size; i++)
        {
            if (data[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
    printf("--------------------------------------Linear Search------------------------------------------------------\n");
    int element = 1;
    int data[] = {1, 2, 3, 1, 2, 1, 2, 1, 3, 2, 1, 3, 2, 1, 2, 1, 2, 1, 2, 5, 6, 7, 8, 9, 9, 0, 2};
    int size = sizeof(data)/sizeof(data[0]);
    int search = linearSearch(data, element, size);
    if (search > 0)
    {
        printf("Element found at index %d", search);
    }
    else
    {
        printf("Element doesn't exist.");
    }

    return 0;
}