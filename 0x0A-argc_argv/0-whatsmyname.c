#include <stdio.h>
#include <stdlib.h>
/**
* main - print argv[0]
* @argc: the number of arguments
* @argv: the arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
