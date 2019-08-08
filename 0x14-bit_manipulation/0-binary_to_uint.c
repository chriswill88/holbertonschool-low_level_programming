#include "holberton.h"
/**
 * binary_to_uint - converts binary to uint
 * @b: the string that holds the binary number
 * Return: the unsigined int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, bin = 1, total = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	while (i > 0)
	{
		i--;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		total += ((b[i] - '0') * bin);
		if (bin == 1)
			bin *= 2;
		else
			bin *= 2;
	}
	return (total);
}
