#include "3-calc.h"
/**
* main - multiply, divid, add, subtract
* @argc: number of arguments
* @argv: arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	int x, y, results = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	results = (get_op_func(argv[2]))(x, y);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", results);
	return (0);
}
