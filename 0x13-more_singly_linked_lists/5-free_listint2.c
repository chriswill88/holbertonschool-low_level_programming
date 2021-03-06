#include "lists.h"
/**
* free_listint2 - frees linked list
* @head: the linked list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head && *head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}

}
