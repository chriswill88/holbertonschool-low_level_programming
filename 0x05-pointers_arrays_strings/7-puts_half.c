#include "holberton.h"
/**
* puts_half - prints half of a string
* @str: the string
* Return: void
*/
void puts_half(char *str)
{
	int i, n;
	char *s = str;

	for (i = 0; *str != '\0'; str++, i++)
		;
	if (i % 2 == 1)
		n = (i + 1) / 2;
	else
		n = (i / 2);
	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
