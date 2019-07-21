#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	char *a, *b;

	printf("%ld\n", (strtol(argv[1], &a, 10) * strtol(argv[2], &b, 10)));
	return (0);
}
