#include "holberton.h"
/**
* print_triangle - prints triangle
* @size: size of triangle
* Return: void
*/
void print_triangle(int size)
{
	int index, hash, blanks, csize = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (index = 0; index < size; index++)
	{
		for (blanks = csize; blanks > 1; blanks--)
			_putchar(' ');
		for (hash = 0; hash <= index; hash++)
			_putchar('#');
		_putchar('\n');
		csize--;
	}
}
