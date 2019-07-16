#include "holberton.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, space = 0, s1c = 0, count = 0;
	char *ptr, *start;

	if (s1 == NULL)
		i++;
	if (s2 == NULL)
		*s2 = '\0';

	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;

	space = n + i;
	ptr = malloc(space);
	if (ptr == NULL)
		return (NULL);
	start = ptr;
	while (count < space)
	{
		if (i > s1c)
		{
			*ptr++ = s1[s1c];
			s1c++;
		}
		else if (*s2 != '\0')
			*ptr++ = *s2++;
		count++;
	}
	*ptr = *s2;
	printf("%d", count);
	return (start);
}
