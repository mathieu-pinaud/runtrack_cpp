#include <iostream>

void addElement(int *array, int size, int element)
{
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    newArray[size] = element;
    delete[] array;
    array = newArray;
    size++;
}

void showTable(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
