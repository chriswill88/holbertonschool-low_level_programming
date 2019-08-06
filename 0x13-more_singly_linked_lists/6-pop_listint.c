#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return((*head)->n);
}