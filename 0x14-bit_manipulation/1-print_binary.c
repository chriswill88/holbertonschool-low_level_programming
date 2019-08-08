#include "holberton.h"
/**
 * 
 */
void print_binary(unsigned long int n)
{
	while (n)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n >> 1
	}
}