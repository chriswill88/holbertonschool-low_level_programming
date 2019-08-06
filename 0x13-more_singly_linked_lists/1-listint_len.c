#include "lists.h"

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{		i++;
		h = h->next;
	}
	return(i);
}