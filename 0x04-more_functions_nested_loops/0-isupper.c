#include "holberton.h"
#include <stdio.h>
/**
* _isupper - checks for upper case
* @c: the ascii for a character
* Return: 1 if finds a uppercase or 0
*/
int _isupper(int c)
{
	char a = 'A';

	while (a <= 'Z')
	{
		if (c == a)
			return (1);
		a++;
	}
	return (0);
}
