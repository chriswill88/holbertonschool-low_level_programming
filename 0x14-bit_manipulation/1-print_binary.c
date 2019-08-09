#include "holberton.h"
/**
 * print_binary - prints numbers into binary
 * @n: the number to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long long int i = 1, num = 0;

	if (n == ULONG_MAX)
		n >>= 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((unsigned long long int)i < n)
		i <<= 1;
	while (i)
	{
		if (n & i)
			_putchar('1');
		else
		{
			if (num == 0)
				num++;
			else
				_putchar('0');
		}
		i >>= 1;
	}
}
