#include "sort.h"
/**
 * insertion_sort_list - uses insertion sorting method
 * @list: double pointer to linked list
 * Returns: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *a, *insert;

	if (!list || !(*list))
		return;
	ptr = *list;
	while (ptr->next)
	{
		a = ptr->next;
		if (a != NULL && ptr->n > a->n)
		{
			insert = a;
			a = ptr;
			while (a && insert->n < a->n)
			{
				if (!a->prev)
					switchy(list, a, insert, 2);
				else if (!insert->next)
					switchy(list, a, insert, 1);
				else
					switchy(list, a, insert, 0);
				print_list(*list);
				a = insert->prev;
			}
		}
		else
			ptr = ptr->next;
	}
}
/**
 * switchy - switches per case
 * @list: the linked list
 * @a: a pointer to a node
 * @insert: a pointer to a node we are inserting
 * @n: the operation code, 0, 1, or 2
 * Description: 0 = intermeiary switches, 1 = end switch , 2 = beginning switch
 * Return: void
 */
void switchy(listint_t **list, listint_t *a, listint_t *insert, int n)
{
	if (n == 0)
	{
		a->prev->next = insert;
		insert->next->prev = a;
		a->next = insert->next;
		insert->prev = a->prev;
		a->prev = insert;
		insert->next = a;
	}
	if (n == 1)
	{
		insert->prev = a->prev;
		a->prev->next = insert;
		a->prev = insert;
		a->next = NULL;
		insert->next = a;
	}
	if (n == 2)
	{
		a->next = insert->next;
		if (insert->next)
			insert->next->prev = a;
		insert->next = a;
		a->prev = insert;
		insert->prev = NULL;
		*list = insert;
	}
}
