#include "holberton.h"
/**
*
*
*
*
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		if (c == *s)
			return (s);
	}
	return (NULL);
}
