#include "holberton.h"
/**
* print_most_numbers - prins sing digits except 2 and 4
* Return: void
*/
void print_most_numbers(void)
{
	int ini;

	for (ini = 0; ini < 10; ini++)
	{
		if (ini != 2 && ini != 4)
			_putchar(ini + '0');
	}
	_putchar('\n');
}
