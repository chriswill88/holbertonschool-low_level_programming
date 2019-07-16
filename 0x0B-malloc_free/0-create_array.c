#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars and sets it to specific char
* @size: the number of memory to allocate
* @c: the character to set
* Return: NULL if size is 0 and if fails or a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
		ptr[i++] = c;
	return (ptr);
}
