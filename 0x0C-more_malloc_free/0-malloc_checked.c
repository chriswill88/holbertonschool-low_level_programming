#include "holberton.h"
/**
* malloc_checked - function allocates memory using malloc
* @b: the space to allocate
* Return: a pointer to memory allocation
*/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
