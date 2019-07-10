#include "holberton.h"
/**
*
*
*
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, i = 0;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
			{
				n++;
				break;
			}
			if (*(accept + i) == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
