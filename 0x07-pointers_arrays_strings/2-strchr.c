#include "holberton.h"
/**
* _strchr - locates a character in a string
* @s: the string to search for character in
* @c: char to find
* Return: pointer to the first place the string is found or NULL
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		if (c == *s)
			return (s);
	}
	return (NULL);
}
