#include "holberton.h"
/**
* print_diagonal - prints diagonal lines
* @n: size of lines
* Return: void
*/
void print_diagonal(int n)
{
	int index, indey;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (index = 0; index < n; index++)
	{
		for (indey = 0; indey < index; indey++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
