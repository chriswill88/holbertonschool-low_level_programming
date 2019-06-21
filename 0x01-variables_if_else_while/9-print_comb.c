#include <stdio.h>
/**
* main - prints single digits with seperators
* Return: 0
*/
int main(void)
{
        int alpha = 0;

        while (alpha <= 9)
        {
                putchar((alpha++) + '0');
                if (alpha <= 9)
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');
        return (0);
}
