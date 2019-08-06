#include "lists.h"
/**
* add_nodeint - adds a node to the beginning
* @head: the singly linked list
* @n: the number to add in the node created
* Return: the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
