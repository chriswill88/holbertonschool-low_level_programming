#include "holberton.h"
/**
* _strcmp - compares strings
* @s1: a string to be compared
* @s2: a string to be compared
* Return: *s1 - *s2
*
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}
	return (*s1 - *s2);
}
