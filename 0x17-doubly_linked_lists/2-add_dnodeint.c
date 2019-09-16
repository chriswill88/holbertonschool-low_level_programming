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
	if (new == NULL)
		return (NULL);

	if (*head && *head != NULL)
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
