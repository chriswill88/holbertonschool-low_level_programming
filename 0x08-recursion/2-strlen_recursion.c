#include "holberton.h"
/**
* _strlen_recursion - finds the string length
* @s: the string
* Return: the sum
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (s[sum] == '\0')
	{
		return (0);
	}
	sum += 1;
	return (sum += _strlen_recursion(s + sum));
}
