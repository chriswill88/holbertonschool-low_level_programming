#include "variadic_functions.h"
/**
* sum_them_all - gets the sum of the arguments
* @n: the number of arguments
* Return: void
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list va;

	if (n == 0)
		return (0);

	va_start(va, n);
	while (n > i)
	{
		sum += va_arg(va, int);
		i++;
	}
	va_end(va);
	return (sum);
}
