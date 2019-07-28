#include "variadic_functions.h"
/**
*
*
*
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list va;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(va, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(va);
	printf("\n");
}