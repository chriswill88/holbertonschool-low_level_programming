#include <stdio.h>
/**
* main - prints alphabet in lowercase\n
* Return: 0
*/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
		putchar(alpha++);
	putchar('\n');
	return (0);
}
