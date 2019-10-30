#include "sort.h"
/**
 * selection_sort - uses selection sort algorithms
 * @array: the array
 * @size: the size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t mov = 0, i = 0, n = 0, h, on;

	while (i < size)
	{
		mov = i;
		h = i;
		on = 0;
		while (mov < size)
		{
			if (array[mov] < array[h])
			{
				h = mov;
				n = array[h];
				on = 1;
			}
			if (on && mov == size - 1)
			{
				array[h] = array[i];
				array[i] = n;
				print_array(array, size);
			}
			mov++;
		}
		i++;
	}
}
