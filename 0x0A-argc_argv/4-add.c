#include <stdio.h>
#include <string.h>
/**
* main - addes many numbers
* @argc: the # of arguments
* @argv: the arrguments
* Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	int i = 1, n = 0, results = 0, place = 1, x = 0;

	while (argv[i] != NULL)
	{
		x = strlen(argv[i]) - 1;
		place = 1;
		for (n = x; n >= 0; n--)
		{
			if (argv[i][n] < '0' || argv[i][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
			results += ((argv[i][n] - '0') * place);
			place *= 10;
		}
		i++;
	}
	printf("%d\n", results);
	return (0);
}
