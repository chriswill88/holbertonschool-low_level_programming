#include "function_pointers.h"
/**
* array_iterator - interates through an array and passes ints into a funct
* @array: a pointer to an array of ints
* @size: the number of elements in the array
* @action: the function the ints in the array are being passed to
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || size <= 0)
		return;

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
