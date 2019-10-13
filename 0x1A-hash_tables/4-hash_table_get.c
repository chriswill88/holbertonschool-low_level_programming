#include "hash_tables.h"
/**
 * hash_table_get - returns the value of a hash table at an index
 * @ht: pointer to a hash table
 * @key: the key for the nodes
 * Return: the value at the paticular index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t **ptr, *node;

	if (!ht || ht->array == NULL || !key)
		return (NULL);

	ptr = ht->array;
	idx = key_index((const unsigned char *)key, ht->size);
	if (!ptr[idx])
		return (NULL);
	if (!(ptr[idx])->key)
		return (NULL);
	node = ptr[idx];
	while (node)
	{
/*string compare for whether to create a new node or just update a key*/
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (ht->array[idx]->value);
}
