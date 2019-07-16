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
//	int x = 0, y = 0, sum;
	char *a, *b;

//	x = strtol(argv[1], &a, 10);
	//y = strtol(argv[2], &b, 10);

	//sum = x * y;
	printf("%ld\n", (strtol(argv[1], &a, 10) * strtol(argv[2], &b, 10)));
	return (0);
}
/**
	int z, y, i = 0, n = 0, results = 0, place = 1, x = 0, place1 = 1;
}
*/
/**
*	if (argc != 3)
*	{
*		printf("Error\n");
*		return (1);
*	}
*	i = strlen(argv[1]) - 1;
*	n = strlen(argv[2]) - 1;
*	x = n;
*	while (i >= 0)
*	{
*		place = 1;
*		if (argv[1][i] == '-')
*		{
*			results *= -1;
*		}
*		else
*		{
*			for (n = x; n >= 0; n--)
*			{
*				if (argv[2][n] == '-')
*					results *= -1;
*				else
*				{
*					z = ((argv[1][i] - '0') * place1);
*					y = ((argv[2][n] - '0') * place);
*					results +=  z * y;
*				}
*				place *= 10;
*			}
*		}
*		place1 *= 10;
*		i--;
*	}
*	printf("%d\n", results);
*	return (0);
*}
*/
