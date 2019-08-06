#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node into a linked list at an index
* @head: the beginning of the list
* @idx: the index
* @n: the n to add to the created node
* Return: a new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr = *head;

	idx -= 1;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while (idx > 0 && (ptr))
	{
		ptr = (ptr)->next;
		idx--;
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = (ptr)->next;
		(ptr)->next = new;

	}
	else
		return (NULL);
	return (new);
}
