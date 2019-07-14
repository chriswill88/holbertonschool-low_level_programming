#include <stdio.h>
/**
* main - prints the arguments
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
