#include "search_algos.h"
/**
 * linear_search - uses linear search to find a value
 * @array: the array of ints
 * @size: the size of the array
 * @value: the value to find in array
 * Return: the index where the value was found or -1
 */
int linear_search(int *array, size_t size, int value)
{
    int *ptr = array;
    size_t i = 0;

    for (i = 0; array && i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (ptr[i] == value)
            return (i);
    }
    return (-1);
}