#include "holberton.h"
/**
* _puts - function that prints a string
* @str: a string
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
