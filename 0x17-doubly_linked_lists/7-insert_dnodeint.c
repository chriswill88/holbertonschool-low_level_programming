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
	dlistint_t *new, *ptr = *h;
	unsigned int i = 0;

	i = 1;
	if (*h && (*h)->prev)
		while ((*h)->prev)
			(*h) = ((*h)->prev);
	while (idx != 0 && i < idx && ptr)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (ptr == NULL)
	{
		new->next = ptr;
		new->prev = NULL;
		ptr->prev = ptr;
		ptr = new;
		return (ptr);
	}
	if (idx == 0)
	{
		new->next = ptr;
		new->prev = NULL;
		ptr->prev = new;
		*h = new;
		return (new);
	}
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	ptr->next->prev = new;
	return (new);
}
