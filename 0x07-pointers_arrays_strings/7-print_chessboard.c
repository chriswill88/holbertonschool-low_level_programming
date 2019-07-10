#include "holberton.h"
/**
* print_chessboard - the chess board
* @a: array
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, n;

	while (i < 8)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
		i++;
	}
}