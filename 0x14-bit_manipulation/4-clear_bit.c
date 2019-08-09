#include "holberton.h"

/**
 * clear_bit - turns a bit off
 * @n: the number we are altering
 * @index: the bit
 * Return: 1 if success, -1 if not success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	i <<= index;
	*n &= ~i;
	return (1);
}
