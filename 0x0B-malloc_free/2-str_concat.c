#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - concatinates two strings
* @s1: string 1
* @s2: string 2
* Return: ptr to memory address
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, space = 0, count = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	space = n + i;

	ptr = malloc(space);
	if (ptr == NULL)
		return (NULL);
	while (count < space)
	{
		if (*s1 != '\0')
			ptr[count] = *s1++;
		else
			ptr[count] = *s2++;
		count++;
	}
	return (ptr);
}
