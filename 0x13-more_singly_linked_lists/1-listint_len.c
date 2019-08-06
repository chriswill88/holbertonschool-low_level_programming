#include "lists.h"
/**
* listint_len - gets the number of nodes in a list
* @h: the linked list
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{		i++;
		h = h->next;
	}
	return (i);
}
