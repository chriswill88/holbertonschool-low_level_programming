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
	dlistint_t *new, *p = *h;

	if (h == NULL)
		return (NULL);
	if ((*h)->prev)
		while ((*h)->prev)
			(*h) = ((*h)->prev);
	while (idx > 0)
	{
		if (p == NULL && idx != 0)
			return (NULL);
		if (p->next == NULL && idx - 1 == 0)
			break;
		p = p->next;
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (p->prev == NULL)
	{
		new->prev = NULL;
		new->next = p;
		p->prev = new;
		(*h) = new;
		return (new);
	}
	if (p->next == NULL && idx - 1 == 0)
	{
		new->next = p->next;
		new->prev = p->prev;
		p->next = new;
		return (new);
	}
	new->prev = p->prev;
	new->next = p;
	p->prev->next = new;
	p->prev = new;
	return (new);
}
