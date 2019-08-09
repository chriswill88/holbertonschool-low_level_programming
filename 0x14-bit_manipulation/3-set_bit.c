#include "holberton.h"
/**
 * set_bit - sets the bit of an index to on
 * @n: the number in which there is a bit that we change
 * @index: the bit we need to change
 * Return: 1 for success and -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 63)
		return (-1);
	i <<= index;
	*n |= i;

	return (1);
}
