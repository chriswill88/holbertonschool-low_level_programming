#include "holberton.h"
/**
* _strcmp - compares the length of the strings
* @s1: a string to compare
* @s2: a string to compare
* Return: 15, -15, 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[x] != '\0')
		x++;

	if (i == x)
		return (0);
	if (i > x)
		return (15);
	return (-15);
}
