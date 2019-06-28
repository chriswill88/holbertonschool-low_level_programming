#include "holberton.h"
/**
* print_numbers - prints single digits
* Return: void
*/
void print_numbers(void)
{
	int initial = 0;

	for (initial = 0; initial < 10; initial++)
		_putchar(initial + '0');
	_putchar('\n');
}
