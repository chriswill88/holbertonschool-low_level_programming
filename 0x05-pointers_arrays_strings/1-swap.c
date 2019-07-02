#include "holberton.h"
/**
* swap_int - swaps two numbers
* @a: a number
* @b: a number
* Return: void
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
