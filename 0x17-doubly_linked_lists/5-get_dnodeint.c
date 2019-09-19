#include "lists.h"
/**
 * get_dnodeint_at_index - return the nodes at the index
 * @head: the first node
 * @index: the index of nodes
 * Return: the node at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
