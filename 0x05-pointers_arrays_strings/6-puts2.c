#include "holberton.h"
/**
* puts2 - 1 out of two chars
* @str: string
* Return: void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
			str++;
	}
	_putchar('\n');
}
