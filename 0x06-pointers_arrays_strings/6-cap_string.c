#include "holberton.h"
/**
* cap_string - capitalizes first letter in words
* @a: the string passed in
* Return: the processed string
*/
char *cap_string(char *a)
{
	char *seperator = ", ; . ! ? \" ( ) \t \n { }";
	int i, n = 0;

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] -= 32;
	while (a[n] != '\0')
	{
		for (i = 0; seperator[i] != '\0'; i++)
		{
			if (seperator[i] == a[n])
			{
				if (a[n + 1] >= 'a' && a[n + 1] <= 'z')
				{
					n++;
					*(a + n) -= 32;
				}
			}
		}
		n++;
	}
	return (a);
}
