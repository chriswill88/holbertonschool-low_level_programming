
#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - count to 98 from any number
* @n: the starting number
* Return: void
*/
void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
			n++;
		}
		putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
			n--;
		}
		putchar('\n');
	}
}
