#include <stdio.h>
/**
* main - prints alphabet backwards
* Return: 0
*/
int main(void)
{
        char alpha = 'z';

        while (alpha <= 'a')
                putchar(alpha--);
        putchar('\n');
        return (0);
}
