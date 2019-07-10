#include "holberton.h"
/**
* _strpbrk - seaches a string for any set of bytes
* @s: the string
* @accept: the bytes to find
* Return: ptr to first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		i = 0;
		while (accept[i++])
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	if (*s == accept[i])
		return (s);
	return (NULL);
}
