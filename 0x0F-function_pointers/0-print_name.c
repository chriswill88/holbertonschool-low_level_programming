#include "function_pointers.h"
/**
* print_name - links a string to a function that can print a string
* @name: a string
* @f: a pointer to a function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
