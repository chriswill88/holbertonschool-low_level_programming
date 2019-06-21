#include <stdio.h>
/**
* main - prints all single digits
* Return: 0
*/
int main(void)
{
        int alpha = 0;

        while (alpha <= 9)
        {
                putchar((alpha) + '0');
                alpha++;
        }
        putchar('\n');
        return (0);
}
