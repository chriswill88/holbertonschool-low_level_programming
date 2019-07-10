#include "holberton.h"
/**
* set_string - sets the value of a pointer to a char
* @s: thearray of strings
* @to: a ptr to a string
* Return: void
*/
void set_string(char **s, char *to)
{
	s[0] = to;
}
