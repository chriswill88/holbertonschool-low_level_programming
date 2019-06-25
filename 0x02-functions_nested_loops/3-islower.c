#include "holberton.h"
/**
* _islower - checks if lowercase
* @c: letter for check
* Return: 1 if c i lower and 0 if c is upper
*/
int _islower(int c)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
