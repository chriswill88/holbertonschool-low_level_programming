#include "holberton.h"
/**
* print_diagsums - prints the sum of the diagnals 
* @a: the pointer to an array of an array of ints
* @size: the size of the array of arrays and the array of ints
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int index = 0, i = 0, n = size - 1, sum1 = 0, sum2 = 0;

	while (index < size)
	{
		sum1 += a[i];
		i += size + 1;
		sum2 += a[n];
		n += size - 1;
		index++;
	}
	printf("%d, %d\n", sum1, sum2);
}
