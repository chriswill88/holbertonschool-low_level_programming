#include "lists.h"
/**
* add_nodeint_end - adding a node to the end
* @head: the linked list
* @n: the int to add to the end
* Return: the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			new->n = n;
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
	}
	return (new);

}
