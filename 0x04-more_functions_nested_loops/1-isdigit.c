#include "holberton.h"
#include <stdio.h>
/**
* _isdigit - checks for digits
* @c: the ascii for a character
* Return: 1 if finds a uppercase or 0
*/
int _isdigit(int c)
{
	int a = '0';

	while (a <= '9')
	{
		if (c == a)
			return (1);
		a++;
	}
	return (0);
}
