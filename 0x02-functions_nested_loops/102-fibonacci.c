#include <stdio.h>

int main()
{
	long int n, fib = 0, prev = 1, next = 2;

	printf ("%d\n", 1);

	for (n = 0; n < 50; n++)
	{
		if (prev > next && fib != 1)
			next = fib;
		else 
			prev = fib;
		fib = prev + next;
		printf("%ld\n", fib);
	}
}