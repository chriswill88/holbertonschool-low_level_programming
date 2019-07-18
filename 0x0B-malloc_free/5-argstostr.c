#include "holberton.h"
/**
* argstostr - sets memory for argv
* @ac: the number of arguments
* @av: the arguments
* Return: ptr to the memory which holds the arguments
*/
char *argstostr(int ac, char **av)
{
	int i = 0, n = 0, count = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			n++;
			count++;
		}
		i++;
	}
	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (i < ac)
	{
		n = 0;
		while (av[i][n])
		{
			ptr[count] = av[i][n];
			n++;
			count++;
		}
		ptr[count] = '\n';
		count++;
		i++;
	}
	return (ptr);
}
