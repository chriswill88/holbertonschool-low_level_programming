#include "holberton.h"
/**
* _strstr - locates a sub string
* @haystack: the string
* @needle: the substring to find
* Return: the ptr to the needle in the haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, n;

	if (*needle == '\0')
		return (haystack);
		
	while (*haystack)
	{
		if (*needle == *haystack)
		{
			i = 0;
			n = 0;
			while (needle[n++] == haystack[i++])
			{
				if (needle[n] == '\0')
					return (haystack);
			}

		}
		haystack++;
	}
	return (NULL);
}
