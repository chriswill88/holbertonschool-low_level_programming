#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* positive_or_negative - prints if a number is 0, positive, or negative
* @i: number to be checked
* Return: 0
*/
int positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero", i);
	else if (i < 0)
		printf("%d is negative", i);
	else if (i > 0)
		printf("%d is positive", i);
	putchar('\n');
	return (0);
}
