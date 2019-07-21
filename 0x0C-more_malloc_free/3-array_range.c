#include "holberton.h"
/**
* array_range - creates an array of ints
* @min: min number
* @max: max number
* Return: array of ints
*/

int *array_range(int min, int max)
{
	int *ptr, *ret;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	ret = ptr;

	while (min <= max)
		*ptr++ = min++;
	return (ret);
}
