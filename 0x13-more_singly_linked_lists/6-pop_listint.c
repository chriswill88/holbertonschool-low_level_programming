#include "lists.h"
/**
* pop_listint - frees a node
* @head: the linked lists
*
* Return: the number of the destroyed node
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int save;

	if (head == NULL)
		return (0);
	save = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (save);
}
