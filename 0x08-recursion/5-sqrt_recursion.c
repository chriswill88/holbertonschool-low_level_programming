#include "holberton.h"
/**
* _sqrty - helper function for square root
* @n: the square
* @index: the root
* Return: the root
*/
int _sqrty(int n, int index)
{

	if (n < 0)
		return (-1);
	if (index < n)
	{
		if ((index * index) == n)
			return (index);
		return (_sqrty(n, index + 1));
	}
	return (-1);
}

/**
* _sqrt_recursion - finds the square root
* @n: the square
* Return: the root
*/
int _sqrt_recursion(int n)
{
	return (_sqrty(n, 0));
}
