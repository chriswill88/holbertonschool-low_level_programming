#include "holberton.h"
/**
* _strlen - finds the number of char in a string
* @s: the string
* Return: number of chars in the string
*/
int _strlen(char *s)
{
	int i;

	while (*s++ != '\0')
		i++;
	return (i);
}
