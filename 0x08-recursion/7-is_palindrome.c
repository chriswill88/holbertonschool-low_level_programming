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
/**
* pal - the palindrome helper
* @s: the string
* @i: the string length
* @n: the index
* Return: 0 or 1
*/
int pal(char *s, int i, int n)
{
	if (i >= 0)
	{
		if (s[i] != s[n])
			return (0);
		return (pal(s, i - 1, n + 1));
	}
	return (1);
}
/**
* is_palindrome - finds palindrome
* @s: the string
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i == 0 || *s == '\0')
		return (1);
	return (pal(s, i - 1, 0));
}
