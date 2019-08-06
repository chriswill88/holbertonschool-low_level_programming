#include "lists.h"
/**
* free_listint - free list
* @head: the list to free
*
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	if (ptr)
	{
		while (head)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
