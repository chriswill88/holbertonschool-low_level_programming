#include "holberton.h"
/**
* print_alphabet_x10 - prints alphabet lowercase 10 times
* Return 0;
*/
void print_alphabet_x10(void)
{
	char a;
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
