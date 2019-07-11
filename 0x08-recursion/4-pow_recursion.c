#include "holberton.h"
/**
* _pow_recursion - finds the power of a number
* @x: the number
* @y: the power
* Return: the number to the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
