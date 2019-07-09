#include "holberton.h"
/**
* _memcpy - copies memory area
* @dest: the destination
* @src: the source code
* @n: number of bytes
* Return: a pointer to the copy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (ptr);
}
