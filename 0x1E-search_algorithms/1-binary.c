#include "search_algos.h"
#include <unistd.h>
#include <math.h>
/**
 * binary_search - using binary search to find value in list
 * @array: the array of ints
 * @size: the size of the array
 * @value: the value to find in array
 * Return: the index where the value was found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, half = 0, i;

	if (size == 0 || !array)
		return (-1);

	while (l <= r)
	{
		half = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r ; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
		}

		if (array[half] == value)
			return (half);
		else if (array[half] < value)
			l = half + 1;
		else
			r = half - 1;
	}
	return (-1);
}
