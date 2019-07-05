#include "holberton.h"
/**
* _strcat - concatinates two strings
* @dest: the destination for the string to concatinate to
* @src: the sting to add
* Return: the cncatinated string
*/
char *_strcat(char *dest, char *src)
{
	char *ptdest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest++ = '\0';
	return (ptdest);
}
