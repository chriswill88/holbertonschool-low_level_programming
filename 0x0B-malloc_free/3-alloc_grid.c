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
	int **w = malloc(height * sizeof(int *));

	if (w == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);
	while (i < height)
	{
		w[i] = malloc(width * sizeof(int));
		if (w[i] == NULL)
		{
			while (i > 0)
			{
				free(w[i]);
				i--;
			}
			return (NULL);
		}
		while (n < width)
		{
			w[i][n] = 0;
			n++;
		}
		i++;
	}
	return (w);
}
