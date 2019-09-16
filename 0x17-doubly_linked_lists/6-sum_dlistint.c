#include "lists.h"
/**
 * sum_dlistint - gets sum of the ints in the nodes
 * @head: pointer to the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	if (head->prev != NULL)
		while (head->prev)
			head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
