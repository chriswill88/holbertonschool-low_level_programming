#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t **ptr, *node, *hold;

	if (ht == NULL)
		return;
	ptr = ht->array;
	while (idx < ht->size)
	{
		node = ptr[idx];
		if (node)
		{
			while (node)
			{
				hold = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = hold;
			}
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
