#include "holberton.h"

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		//printf("the string s1* = %s\n the string *s2 = %s\n", s1, s2);
		if (*s2 == '*')
		{
			//printf("the string s1* = %s\n the string *s2 = %s\n", s1, s2);
			if (*(s2 + 1) != '*' && *(s2 + 1) != *s1)
			{
				//printf("the string s1* = %s\n the string *s2 = %s\n", s1, s2);
				s1++;
				return (wildcmp(s1, s2));
		 	}
			s2++;
			return (wildcmp(s1, s2));
		}
		//if (*(s2 - 1) == '*' && *s2 != *s1)


		if (*s1 == *s2)
		{
			s1++;
			s2++;
			return (wildcmp(s1, s2));
		}

		if ((*(s2 - 1) == '*' && *s1 != *s2) &&  *s1 != '\0' && *s2 != '\0')
		{
			if *s1 != *s2
			s1++;
			printf ("weird if : s1 = %c, s2 = %c\n", *s1, *s2);
			return (wildcmp(s1, s2));
		}

		//return (0);
	}
	//printf ("s1 = %c, s2 = %c\n", *s1, *s2);
	
	//if (*(s2 - 1) != '*' && *s1 != *s2 &&  *s1 != '\0' && *s2 != '\0')
	//{
	//	s1++;
	//	return (wildcmp(s1, s2));
	//}
	if (*s2 == '*')
	{
		s2++;
		return (wildcmp(s1, s2));
	}
	if (*s1 == *s2)
	{
		printf ("s1 = %c, s2 = %c\n", *s1, *s2);
		return (1);
	}
	printf ("s1 = %c, s2 = %c\n", *s1, *s2);
	return (0);
}