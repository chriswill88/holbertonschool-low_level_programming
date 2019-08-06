#include "lists.h"
/**
* sum_listint - takes the sum of the numbers in the nodes
* @head: the linked list
* Return: the sum of the n variables in the nodes
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
