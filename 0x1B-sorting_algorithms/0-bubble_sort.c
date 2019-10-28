#include "sort.h"
/**
 * bubble_sort - uses bubble sort algorithm to sort an array of ints
 * @array: the array of ints
 * @size: the size of the array
 * Return: nothing its void
 */
void bubble_sort(int *array, size_t size)
{
	size_t ind = 0, hold = 0, n = 1;

	if (size <= 0 || !array)
		return;

	while (n)
	{
		for (ind = 0; ind + 1 < size; ind++)
		{
			if (array[ind] > array[ind + 1])
			{
				hold = array[ind];
				array[ind] = array[ind + 1];
				array[ind + 1] =  hold;
				n = 1;
				print_array(array, size);
			}
			else
				n = 0;
		}
	}
}
