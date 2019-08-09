#include "holberton.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	while (i <= index)
		i <<= 1;
	
	if (((*n >>= index) & 1) == 0)
		return(*n += i);
	else
		return (-1);
}