#include "lists.h"
/**
* add_node_end - adds node to the end of a list
* @head: the first node in the list
* @str: the string to add in the list
* Return: the front of the linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *ptr;

	if (head == NULL || str == NULL)
		return (NULL);
	ptr = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;
	if (*head == NULL)
	{
		new->str = strdup(str);
		if ((new->str) == NULL)
			return (NULL);
		new->len = i;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr)
	{
		if (ptr->next == NULL)
		{
			new->str = strdup(str);
			if ((new->str) == NULL)
				return (NULL);
			new->len = i;
			new->next = ptr->next;
			ptr->next = new;
			break;
		}
		ptr = ptr->next;
	}
	return (*head);
}
