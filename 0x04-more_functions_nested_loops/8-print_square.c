#include "holberton.h"
/**
* print_square - prints diagonal lines
* @size: size of lines
* Return: void
*/
void print_square(int size)
{
	int index, indey;


	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (index = 0; index < size; index++)
	{
		for (indey = 0; indey < size; indey++)
			_putchar('#');
		_putchar('\n');
	}
}
