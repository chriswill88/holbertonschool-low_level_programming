#include "variadic_functions.h"
/**
* print_numbers - prints the elements
* @separator: the seperator between the elements
* @n: the number of argument
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}
