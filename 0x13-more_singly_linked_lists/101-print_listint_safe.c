#include "lists.h"
/**
 * print_listint_safe - print linked list
 * @head: the beginning node
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	void *a[9000];
	const listint_t *ptr;
	int i = 0, n;

	if (head == NULL)
		return (98);
	ptr = head;
	while (ptr != NULL && i < 900)
	{
		a[i] = (void *)ptr;
		n = 0;
		while (a[n])
		{
			if (a[n] == ptr)
			{
				n++;
				while (a[n])
				{
					if (a[n] == ptr)
					{
						printf("-> [%p] %d\n", (void *)ptr, ptr->n);
						return (i);
					}
					n++;
				}
			}
			n++;
		}
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
