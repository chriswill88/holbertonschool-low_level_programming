#include "holberton.h"
/**
* _strcpy - string copy
* @dest: destination
* @src: sourse
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i++] = *src;
		src++;
	}
	dest[i++] = '\0';
	return (dest);
}
