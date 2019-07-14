#include <stdio.h>
#include <string.h>
/**
* main - multiplies two numbers
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc, char **argv)
{
	int i = 0, n = 0, results = 0, place = 1, place1 = 1, x = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = strlen(argv[1]) - 1;
	n = strlen(argv[2]) - 1;
	x = n;
	while (i >= 0)
	{
		place = 1;
		if (argv[1][i] == '-')
		{
			results *= -1;
			i--;
			break;
		}
		for (n = x; n >= 0; n--)
		{
			if (argv[2][n] == '-')
			{
				n--;
				results *= -1;
				break;
			}
			results += ((argv[1][i] - '0') * place1) * ((argv[2][n] - '0') * place);
			place *= 10;
		}
		place1 *= 10;
		i--;
	}
	printf("%d\n", results);
	return (0);
}
