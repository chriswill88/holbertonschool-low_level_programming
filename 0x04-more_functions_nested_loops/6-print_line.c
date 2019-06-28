#include "holberton.h"
/**
* print_line - literally prints a line
* @n: the length of line
* Return: void
*/
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
		_putchar('_');
	_putchar('\n');
}
