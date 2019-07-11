#include "holberton.h"
/**
* _puts_recursion - prints a string
* @s: a string
* Return: void
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}
