#include "holberton.h"
/**
* _strncpy - a function that copies a string
* @dest: the destination to copy to
* @src: the string to copy
* @n: the number of bytes to copy
* Return: the copy of a string
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
