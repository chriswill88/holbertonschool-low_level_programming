#include "holberton.h"

int _atoi(char *s)
{
	char *n = s;
	int i = 0, sum = 0, p = 1, x = 0, end = 0, beg = 0, neg = 1;

	while (n[i] != '\0')
	{
		if (n[i] == '-')
			neg *= -1;

		if (n[i] >= '0' && n[i] <= '9')
		{	
			if (beg == 0 && i > 0)
				beg += i;
			//putchar(n[i]);
			end = i; 
			x++;
			i++;
		}
		else
			i++;
	}
	//printf("\n beg is %d \n end is %d \n", beg, end);
	//return (end);
	while (beg <= end)
	{
		sum += ((n[end] - '0') * p);
		p *= 10;
		end--;
	}
	//printf("%d\n", sum * neg);
	return (sum * neg);
}
