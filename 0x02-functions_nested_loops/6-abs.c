#include "holberton.h"
/**
* _abs - gets the absolute value
* @a: the number to get the abs for
* Return: absolute value of a
*/
int _abs(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}
