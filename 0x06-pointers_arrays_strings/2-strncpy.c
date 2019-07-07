#include "holberton.h"
/**
*
*
*
*
*
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *cp = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (cp);
}
