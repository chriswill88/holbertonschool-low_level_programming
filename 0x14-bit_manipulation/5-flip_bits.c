#include "holberton.h"
/**
 * flip_bits - the number of bytes the need to be flipped to flipped
 * @n: a number
 * @m: a number
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, c = 0;

	num = n ^ m;
	while (num)
	{
		if (num & 1)
			c += 1;
		num >>= 1;
	}
	return (c);
}
