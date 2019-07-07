#include "holberton.h"
/**
* rot13 - an encryptor moving char up by 13 places
* @a: a string
* Return: processed string
*/
char *rot13(char *a)
{
	char *al = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rt = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, n = 0;

	while (a[i] != '\0')
	{
		for (n = 0; al[n] != '\0'; n++)
		{
			if (al[n] == a[i])
			{
				a[i] = rt[n];
				break;
			}
		}
		i++;
	}
	return (a);
}
