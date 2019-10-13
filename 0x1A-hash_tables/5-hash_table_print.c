#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, counter = 0;
	hash_node_t **ptr, *node;

	printf("{");
	ptr = ht->array;
	while (idx < ht->size)
	{
		if (ptr[idx])
		{
			node = ptr[idx];
			while (node)
			{
				if (counter > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				counter++;
			}
		}
		idx++;
	}
	printf("}\n");
}
