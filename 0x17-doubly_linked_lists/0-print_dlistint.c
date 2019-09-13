#include "lists.h"
/**
* print_dlistint - prints the list
* @h: pointer to the list
* Return: the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
