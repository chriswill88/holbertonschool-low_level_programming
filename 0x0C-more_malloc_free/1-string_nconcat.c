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
	unsigned int i = 0, x = 0, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[x])
		x++;

	if (n >= x)
	{
		size = i + x + 1;
	/*	printf("n >= x ::: x = %d : size = %d\n", x, size);*/
	}
	else
	{
		size = i + n + 1;
	/*	printf("else ::: x = %d : size = %d\n", x, size);*/
	}
	cc = malloc(size);
	if (cc == NULL)
		return (NULL);

	for (i = 0; i < size && *s2; i++)
	{
		if (*s1)
			cc[i] = *s1++;
		else if (*s2)
			cc[i] = *s2++;
	}
	/*cc[size] = '\0';*/

	return (cc);
}