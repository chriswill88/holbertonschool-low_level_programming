#include <stdio.h>
#include <unistd.h>
/**
* main - writes out a quote
* Return: 1
*/
int main(void)
{
	int n;

	n = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", n);
	return (1);
}
