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
	int (*p)(int, int);

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
	p = (get_op_func(argv[2]));
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	results = (p)(x, y);
	printf("%d\n", results);
	return (0);
}
