#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(ULONG_MAX, 20000);
	printf("%d\n", n);
	return (0);
}