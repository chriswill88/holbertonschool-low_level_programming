#include "holberton.h"
/**
* main - prints holberton
*
* Return: 0
*/
int main(void)
{
	char *a = "Holberton";

	while (*a != '\0')
	{
		_putchar(*a);
		a++;
	}
	_putchar('\n');
	return (0);
}
