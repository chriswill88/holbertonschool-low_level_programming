#include "holberton.h"
#include <stdio.h>
/**
* times_table - prints time tables
* Return: void;
*/
void times_table(void)
{
	int rows, columns, total;

	for (columns = 0; columns < 10; columns++)
	{
		for (rows = 0; rows < 10; rows++)
		{
			total = rows * columns;
			if ((total / 10) < 1 && rows < 10 && rows > 0)
				_putchar(' ');
			if (total > 9)
				_putchar((total / 10) + '0');
			_putchar((total % 10) + '0');
			if (rows < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
