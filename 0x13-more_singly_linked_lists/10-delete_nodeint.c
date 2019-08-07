#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node at an index
* @head: the begining of the linked list
* @index: the index to delete
* Return: 1 if success, 0 if not
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *prev = *head;

	if (head == NULL || *head == NULL)
		return (0);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (index > 0)
	{
		if (index > 1)
			prev = prev->next;
		ptr = ptr->next;
		index--;
	}
	if (index == 0)
	{
		prev->next = ptr->next;
		free(ptr);
		return (1);
	}
	return (-1);
}
