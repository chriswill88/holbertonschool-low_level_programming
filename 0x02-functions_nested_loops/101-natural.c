#include <stdio.h>
/**
* main - prints multples of 5 and 3
* Return: 0
*/
int main()
{
	int num;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			printf("%d\n", num);
	}
	return (0);
}
