#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted list
 * @array: the array of ints
 * @size: the total size of the array
 * @value: the value to find in the list
 * Return: the index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t tsize = sqrt(size), inx = 0, ind = 0, btw = 0;

	if (!array || !size)
		return (-1);
	/*printf("the sqrt = %ld size = %ld\n--------------------\n", tsize, size);*/
	for (inx = 0; inx < size; inx += tsize)
	{
		printf("Value checked array[%ld] = [%d]\n", inx, array[inx]);
		if (inx + tsize >= size)
			btw = size - 1;
		else
			btw = tsize + inx;
		if (value <= array[btw])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", inx, btw);
			for (ind = inx; ind <= btw && ind < size; ind++)
			{
				printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);
				if (array[ind] == value)
					return (ind);
			}
		}
	}
	return (-1);
}
