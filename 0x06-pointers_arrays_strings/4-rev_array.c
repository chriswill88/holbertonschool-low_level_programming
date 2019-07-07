#include "holberton.h"
/**
* reverse_array - reverse the content of the array of ints
* @a: the array
* @n: the number of elements
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0, keep, end = n - 1;

	n -= 1;
	while (i < (end / 2))
	{
		keep = a[i];
		a[i] = a[n];
		a[n] = keep;
		n--;
		i++; 
	}
}