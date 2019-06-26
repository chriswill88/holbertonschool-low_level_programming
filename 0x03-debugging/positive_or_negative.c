#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints if a number is 0, positive, or negative
* Return: 0
*/
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	else if (n > 0)
		printf("%d is positive", n);
	putchar('\n');
	return (0);
}
