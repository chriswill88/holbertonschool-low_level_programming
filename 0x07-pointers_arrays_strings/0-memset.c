#include "holberton.h"
/**
* _memset - function fills the first n bytes of memory
* @s: a pointer to memory
* @b: the constant bytes
* @n: the number of bytes
* Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	char  *ptr = s;

	while (n > 0)
	{
		*s++ = b;
		n--;
	}
	return (ptr);
}
