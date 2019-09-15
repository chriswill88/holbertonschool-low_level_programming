#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning
 * @head: the beginning node
 * @n: the n in the new node
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (*head && (*head)->prev)
	{
		while ((*head)->prev)
			(*head) = (*head)->prev;
		if (*head == NULL)
			(*head) = (*head)->next;
	}
	
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
