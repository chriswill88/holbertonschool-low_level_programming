#include "lists.h"
/**
* free_list - frees singly linked lists
* @head: the node in the list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *ptr = head, *fr;

	while (ptr)
	{
		fr = ptr;
		printf("%s", ptr->str);
		free(ptr->str);
		ptr = ptr->next;
		free(fr);
	}
}
