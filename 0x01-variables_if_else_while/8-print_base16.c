#include <stdio.h>
/**
* main - prints base 16 digits
* Return: 0
*/
int main(void)
{
	char alpha = '0';

	while (alpha <= '9')
		putchar(alpha++);
	alpha = 'a';
		while (alpha <= 'f')
			putchar(alpha++);
	putchar('\n');
	return (0);
}
