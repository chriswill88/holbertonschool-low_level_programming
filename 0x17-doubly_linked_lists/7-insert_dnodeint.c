#include "lists.h"
/**
 * insert_dnodeint_at_index - adds node at a certain index
 * @h: the point to the list
 * @idx: the index
 * @n: the number in the node
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if ((*h)->prev != NULL)
		while ((*h)->prev)
			(*h) = (*h)->prev;

	while (idx > 0 && (*h))
	{
		(*h) = (*h)->next;
		idx--;
	}

	if (idx != 0)
		return (NULL);

	new->n = n;
	new->next = (*h);
	new->prev = (*h)->prev;
	return (new);
}