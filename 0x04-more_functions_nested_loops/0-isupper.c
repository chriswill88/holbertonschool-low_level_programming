#include "holberton.h"
#include <stdio.h>

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
