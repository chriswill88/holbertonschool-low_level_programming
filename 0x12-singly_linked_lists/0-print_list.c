#include "lists.h"
/**
* print_list - prints the list
* @h: the list
* Return: the number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
