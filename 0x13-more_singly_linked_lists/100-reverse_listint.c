#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: the linked list
 * Return: the beginning of the rev list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *work = (*head), *next = *head;

	if (head == NULL || *head == NULL)
	{
		return (*head);
	}
	next = (*head)->next;
	(*head)->next = NULL;

	while (*head)
	{
		if (next == NULL)
			break;
		work = *head;
		(*head) = next;
		next = (next)->next;
		(*head)->next = work;
	}
	return (*head);
}
