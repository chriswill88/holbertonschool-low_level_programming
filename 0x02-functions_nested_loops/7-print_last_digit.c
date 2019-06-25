#include "holberton.h"
/**
* print_last_digit - prints the last digit
* @a: number to get the last digit of
* Return: the last digit of a
*/
int print_last_digit(int a)
{
	int l = a % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
