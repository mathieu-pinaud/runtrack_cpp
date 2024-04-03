#include <iostream>

int smallest(int **arr, int size)
{
    int *ptr = *arr;
    int min = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (*(*(arr + i)) < min)
        {
            min = *(*(arr + i));
        }
    }
    return min;
}