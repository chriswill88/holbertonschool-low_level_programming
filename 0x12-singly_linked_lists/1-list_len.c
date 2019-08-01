#include "lists.h"
/**
* list_len - gets the number of nodes in the list
* @h: the list
* Return: the number of nodes in the linked list
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
