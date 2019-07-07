#include "holberton.h"
/**
* leet - encreptor
* @a: a string
* Return: a processed string
*/
char *leet(char *a)
{
	char *string = "a4A4e3E3o0O0t7T7l1L1";
	int i = 0, n = 0;

	while (a[i] != '\0')
	{
		for (n = 0; string[n] != '\0'; n++)
		{
			if (string[n] == a[i])
			{
				n++;
				a[i] = string[n];
				break;
			}
		}
		i++;
	}
	return (a);
}
