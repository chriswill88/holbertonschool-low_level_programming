#include "holberton.h"
/**
* _strncat - concatinates two strings
* @dest: the string that your adding to
* @src: the string to be concatinated with dest
* @n: the number of bytes
* Return: pinter to concatinated string
*/
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
		*dest = '\0';
	return (cp);
}
