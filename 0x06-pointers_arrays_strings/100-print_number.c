#include "holberton.h"

void print_number(int n)
{
	int x = 1;

	if (n < 0)
		n *= -1;
	if (n == 0)
		_putchar('0');

	while (x <= n)
	{
		//printf ("the number %d\n", (n / x));
		if (n > 9)
			_putchar ((n / x) + '0');
		//_putchar(n % 10 + '0');

		x *= 10;
	}
	_putchar('\n');
}
