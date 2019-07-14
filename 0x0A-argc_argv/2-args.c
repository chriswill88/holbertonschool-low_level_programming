#include <stdio.h>
/**
* main - prints the arguments
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc, char **argv)
{
	int i = 0, n = 0, results = 0;

	if (argv != 2)
	{
		printf("Error\n")
		return (1);
	}

	while (argv[0][i] != '\0')
	{
		argv[0][i++]);
		for (n = 0; argv[1][n] != '\0'; n++)
			results += argv[1][n] * argv[2][i];
	}
	printf("%d", results);
	return (1);
}
