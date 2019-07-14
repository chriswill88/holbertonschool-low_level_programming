#include <stdio.h>
/**
* main - the number of arguments
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
