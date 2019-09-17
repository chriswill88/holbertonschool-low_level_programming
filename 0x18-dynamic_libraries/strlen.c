#include "holberton.h"
/**
 * _strlen - gets the length of strings
 * @s: pinter to a string
 * Return: the string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i++])
		;

	return (i - 1);
}
