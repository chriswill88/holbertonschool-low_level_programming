#include "holberton.h"

/**
* free_grid - frees grid
* @grid: pointer to an array of arrays of int
* @height: the height of the array
* Return: void
*/
void free_grid(int **grid, int height)
{

	while (height > 0)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}
