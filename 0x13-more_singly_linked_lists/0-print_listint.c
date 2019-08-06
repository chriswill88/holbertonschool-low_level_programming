#include "lists.h"
/**
* print_listint - prints a linked list
* @h: a linked list
* Return: the number of elements
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
