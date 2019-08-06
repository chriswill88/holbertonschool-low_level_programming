#include "lists.h"
/**
* get_nodeint_at_index - get the ode at the index
* @head: the beginning of the list
* @index: the index
* Return: a new node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
