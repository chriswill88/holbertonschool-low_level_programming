#include <stdio.h>
/**
*main-printsalphabetbackwards
*Return:0
*/
int main(void)
{
	char alpha = 'z';

	while (alpha <= 'a')
		putchar(alpha--);
	putchar('\n');
	return	(0);
}
