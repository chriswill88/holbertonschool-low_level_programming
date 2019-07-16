#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - a function that returns a copy
* @str: a string
* Return: the copy
*/
char *_strdup(char *str)
{
	int i = 0, n = 0;
	char *ptr = str;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);

	while (i > n)
		ptr[n++] = *str++;

	if (i != n)
		return (NULL);
	return (ptr);
}
