#include "holberton.h"
/**
* _isalpha - checks if c is an alphabet
* @c: the character to be checked
* Return: 1 if is an alphabet or 0 if not an alphabet
*/
int _isalpha(int c)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == c)
			return (1);
		a++;
	}
	a = 'A';
	while (a <= 'Z')
	{
		if (a == c)
			return (1);
		a++;
	}
	return (0);
}
