#include "holberton.h"
/**
 * 
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1, str = 0;


	while (i < n)
		i <<= 1;
	while (i)
	{
		if (n & i)
			_putchar('1');
		else
		{
			if (str == 0)
			{
				str++;
				continue;
			}
			_putchar('0');
		}
		i >>= 1;
	}
}