#include "holberton.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, space;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	
	space = n + i;
	ptr = malloc(space);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < space)
	{
		if (*s1 != '\0')
			*ptr++ = *s1++;
		else if (*s2 != '\0')
			*ptr++ = *s2++;
		else
			*ptr++ = '\0';
		i++;
	}
	return (ptr);
}
