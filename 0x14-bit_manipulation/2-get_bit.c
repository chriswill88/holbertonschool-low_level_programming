#include "holberton.h"
/**
 * 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (((n >> index) & 1) == 0)
		return (0);
	else if (((n >> index) & 1) == 1)
		return (1);
	else
		return (-1);
}
