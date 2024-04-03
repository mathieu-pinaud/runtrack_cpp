#include <iostream>

int doubleArray(int *array, int size)
{
    int res = 0;
    int *ptr = array;
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) *= 2;
        res += *(ptr + i);
    }
    return res;
}

void printArray(int *array, int size)
{
    doubleArray(array, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << *(array + i)<< " ";
    }
    std::cout << std::endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    printArray(array, 5);
    return 0;
}