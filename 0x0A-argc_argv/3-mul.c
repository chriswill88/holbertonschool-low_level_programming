#include <stdio.h>
/**
* main - multiplies two numbers
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc, char **argv)
{
	int i = 0, n, results = 0, place = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	while (argv[1][i] != '\0')
	{
		for (n = 0; argv[2][n] != '\0'; n++)
		{
			printf("1-->%d | 2--> %d\n", (argv[1][i] - '0') , (argv[2][n] - '0'));
			results += (argv[1][i] - '0') * (argv[2][n] - '0') * place;
		}
		place *= 10;
		i++;
	}
	printf("%d\n", results);
	return (1);
}
