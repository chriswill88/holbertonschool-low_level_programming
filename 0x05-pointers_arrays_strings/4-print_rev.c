#include "holberton.h"
/**
* print_rev - prints string in rev
* @s: string
* Return: void
*/
void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i > 0)
	{
		i--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
