#include "lists.h"
/**
 * add_dnodeint_end - adds node to the end
 * @head: the beginning of the linked list
 * @n: the number in the new node
 * Return: the beginning of the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *list = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = list;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}
	return (*head);
}
