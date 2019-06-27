#include <stdio.h>

int main()
{
	long int n, fib = 0, prev = 0, next = 0;

	for (n = 0; n < 50; n++)
	{
		if (prev > next && fib != 1)
			next = fib;
		else 
			prev = fib;
		fib = prev + next;
		printf("%ld\n", fib);
		if (fib == 0)
			next = 1;
		if (fib == 1)
			printf("%d\n", 1);
	}
}