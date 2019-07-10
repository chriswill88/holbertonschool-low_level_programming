#include "holberton.h"
/**
* _strspn - finds the number first initial bytes in a string that match
* @s: the stirng
* @accept: the matching chars
* Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i = 0;

	while (*s != '\0')
	{
		i = 0;
		for (; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
			{
				n++;
				break;
			}
		}
		if (*(accept + i) == '\0')
			return (n);
		s++;
	}
	return (n);
}
