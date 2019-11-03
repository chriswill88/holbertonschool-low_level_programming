#include "sort.h"
/**
 * quick_sort - uses the quicksort algorithm to sort through a list
 * @array: the list
 * @size: the size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, size - 1, 0, size);
}

/**
 * quicksort - recursive algorithm
 * @arr: the array of ints
 * @hi: highest index
 * @lo: lowest index
 * @size: the size of the array
 * Return: void
 */
void quicksort(int *arr, size_t hi, size_t lo, size_t size)
{
	size_t p;

	if (lo < hi && lo < size && hi < size)
	{
		p = part(arr, hi, lo, size);
		quicksort(arr, hi, p + 1, size);
		quicksort(arr, p - 1, lo, size);
	}
}

/**
 * part - creates the partitions of the list
 * @arr: the array of ints
 * @hi: highest index
 * @lo: lowest index
 * @size: the size of the array
 * Return: the pivot
 */
int part(int *arr, size_t hi, size_t lo, size_t size)
{
	size_t ind, i = lo - 1;
	int save, pivot;

	pivot = arr[hi];
	for (ind = lo; ind < hi && ind < size ; ind++)
	{
		if (pivot > arr[ind])
		{
			i++;
			save = arr[ind];
			arr[ind] = arr[i];
			arr[i] = save;
		}
	}
	i++;
	save = arr[hi];
	arr[hi] = arr[i];
	arr[i] = save;
	print_array(arr, size);
	return (i);
}
