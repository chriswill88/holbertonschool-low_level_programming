#include "holberton.h"
/**
* _calloc - allocates memory for an array
* @nmemb: number of elements
* @size: size of type
* Return: pointer to memory allocation
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		alloc[i] = 0;
		i++;
	}
	return (alloc);
}
