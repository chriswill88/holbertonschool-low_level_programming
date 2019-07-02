#include "holberton.h"
/**
* print_array - prints a array of ints
* @a: pointer to array
* @n: num
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i++]);

		if (i <= n - 1)
			printf(", ");
	}
	printf("\n");
}
