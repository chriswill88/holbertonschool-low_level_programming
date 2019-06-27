#include "holberton.h"
#include <stdio.h>
/**
* times_table - prints time tables
* Return: void;
*/
void print_times_table(int n)
{
	int rows, columns, total;

	if (n > 15 || n < 0)
		return;

	for (columns = 0; columns <= n; columns++)
	{
		for (rows = 0; rows <= n; rows++)
		{
			total = rows * columns;
			if ((total / 10) < 1 && rows <= n && rows > 0)
			{
				//_putchar(' ');
			}
			if (total < 100)
			{
				_putchar(' ');
			}
			if (total > 99)
			{
				_putchar((total / 100) + '0');
				_putchar((total % 10) + '0');
			}
			else if (total > 9)
				_putchar((total / 10) + '0');
			_putchar((total % 10) + '0');
			if (rows < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
