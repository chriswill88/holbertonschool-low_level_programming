#include "holberton.h"
/**
* argstostr - sets memory for argv
* @ac: the number of arguments
* @av: the arguments
* Return: ptr to the memory which holds the arguments
*/
char *argstostr(int ac, char **av)
{
	int i = 0, n = 0, count = 0, num = 0, size = 0;
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
		count++;
		i++;
	}
	count++;
	size = ((count * sizeof(char)));
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac && num < size)
	{
		n = 0;
		while (av[i][n] && num < size)
		{
			ptr[num] = av[i][n];
			n++;
			num++;
		}
		ptr[num] = '\n';
		num++;
		i++;
	}
	ptr[num] = '\0';
	return (ptr);
}
