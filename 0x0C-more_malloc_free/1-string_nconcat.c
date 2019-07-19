#include "holberton.h"
/**
* string_nconcat - concatinates n bytes of s2 to s1
* @s1: string 1
* @s2: string 2
* @n: number of bytes of s2
* Return: pointer to the memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cc;
	int i = 0, size;

	while (s1[i])
		i++;
	size = i + n;
	cc = malloc(size);
	for (i = 0; i < size; i++)
	{
		if (*s1)
			cc[i] = *s1++;
		else
			cc[i] = *s2++;
	}
	return (cc);

}
