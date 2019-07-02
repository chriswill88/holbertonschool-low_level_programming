#include "holberton.h"
/**
* rev_string - reverses a string
* @s: a string
* Return: reverse string
*/
void rev_string(char *s)
{
	char *end = s;
	char *beg = s;
	char temp;
	int n = 0, i = 0, x;


	while (*end != '\0')
	{
		end++;
		n++;
	}
	end--;
	n--;
	if (n % 2 == 1)
		x = (n + 1) / 2;
	else
		x = n / 2;
	while (*beg != '\0' && i < x)
	{
		temp = *beg;
		*beg = *end;
		*end = temp;
		beg++;
		end--;
		i++;
	}
}
