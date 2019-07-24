#include "function_pointers.h"
/**
* int_index - this compares a numbers to find a match
* @array: the array of numbers to search through
* @size: the number of elements in the array
* @cmp: a function that compares numbers
* Return: -1 if no match and the index if a match is found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	while (size > i)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
