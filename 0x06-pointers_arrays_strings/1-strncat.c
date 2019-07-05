#include "holberton.h"

char *_strncat(char *dest, char *src, int n)
{
	char *cp = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (cp);
}
