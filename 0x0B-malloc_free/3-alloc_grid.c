#include "holberton.h"
/**
* alloc_grid - retruns a pointer to a 2d grid
* @height: the height of the array
* @width: the width of the array
* Return: a 2d array
*/
int **alloc_grid(int width, int height)
{
	int i = 0, n = 0;
	int **w;

	if (width <= 0 || height <= 0)
		return (NULL);

	w = malloc(height * sizeof(int *));
	if (w == NULL)
		return (NULL);

	while (i < height)
	{
		w[i] = malloc(width * sizeof(int));
		if (w[i] == NULL)
		{
			free(w);
			return (NULL);
		}
		i++;
	}

	for (i = 0; w[i] != NULL; i++)
	{
		n = 0;
		while (n < width)
		{
			w[i][n] = 0;
			n++;
		}
		i++;
	}
	return (w);
}
