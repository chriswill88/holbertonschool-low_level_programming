#include "lists.h"
/**
* free_list - frees singly linked lists
* @head: the node in the list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr, *fr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr)
	{
		fr = ptr;
		free(ptr->str);
		ptr = ptr->next;
		free(fr);
	}
}
