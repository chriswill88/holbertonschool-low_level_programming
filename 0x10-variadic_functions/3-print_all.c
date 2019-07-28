#include "variadic_functions.h"
/**
* print_all - function that prints anything
* @format: the opertators
* Return: void
*/
void print_all(const char * const format, ...)
{
	int n = 0, i = 0;
	char *cp, temp[4] = "cifs";
	va_list va;

	va_start(va, format);
	while (format[n])
	{
		i = 0;
		while (temp[i])
		{
			if (temp[i] == format[n])
			{
				switch (format[n])
				{
					case 'c':
					printf("%c", va_arg(va, int));
					break;
					case 'i':
					printf("%d", va_arg(va, int));
					break;
					case 'f':
					printf("%f", va_arg(va, double));
					break;
					case 's':
					cp = va_arg(va, char *);
					if (cp == NULL)
						cp = "(nil)";
					printf("%s", cp);
					break;
				}
				if (format[n + 1] != '\0')
					printf(", ");
			}
			i++;
		}
		n++;
	}
	va_end(va);
	printf("\n");
}
