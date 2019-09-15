#include "lists.h"
/**
* dlistint_len - return the number of nodes in the list
* @h: pointer to the list
* Return: the number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
