#include <stdio.h>
/**
* main - prints all double digits
* Return: 0
*/
int main(void)
{
	int alpha = 0;

	while (alpha <= 99)
	{
		putchar((alpha / 10) + '0');
		putchar((alpha % 10) + '0');
		if (alpha < 99)
		{
			putchar(',');
			putchar(' ');
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
