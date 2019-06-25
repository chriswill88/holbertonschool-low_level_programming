#include "holberton.h"
/**
*
*
*
*/
int main()
{
	char *a = "Holberton";
	
	_putchar("l");	
	while (*a != '\0')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}