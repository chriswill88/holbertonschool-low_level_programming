#include "lists.h"
/**
* add_node - adds node to the end of a list
* @head: the first node in the list
* @str: the string to add in the new node
* Return: the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;
	new->str = strdup(str);
	if ((new->str) == NULL)
		return (NULL);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
