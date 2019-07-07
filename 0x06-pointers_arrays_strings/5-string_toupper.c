#include "holberton.h"
/**
* string_toupper - makes strings uppercase
* @a: a pointer to a string
* Return: the string
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((a[i] > 'a') && (a[i] < 'z'))
			a[i] -= 32;
		i++;
	}
	return (a);
}