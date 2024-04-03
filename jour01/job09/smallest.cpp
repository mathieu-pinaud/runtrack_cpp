#include <iostream>

int smallest(int *arr, int size)
{
    int *ptr = arr;
    int min = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) < min)
        {
            min = *(ptr + i);
        }
    }
    return min;
}