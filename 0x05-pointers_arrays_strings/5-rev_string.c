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
	int n = 0, i = 0;


	while (*end != '\0')
	{
		end++;
		n++;
	}
	end--;
	n--;
	while (*beg != '\0' && i < n / 2)
	{
		temp = *beg;
		*beg = *end;
		*end = temp;
		beg++;
		end--;
		i++;
	}
}
