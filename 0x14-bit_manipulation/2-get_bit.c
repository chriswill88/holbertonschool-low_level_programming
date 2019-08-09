#include "holberton.h"
/**
 * get_bit - get the bit at an index
 * @n: the number thats unsigned
 * @index: the bit
 * Return: the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (((n >> index) & 1) == 0)
		return (0);
	else if (((n >> index) & 1) == 1)
		return (1);
	else
		return (-1);
}
