#include "hash_tables.h"
/**
 * hash_table_set - sets a node
 * @ht: the pointer to the hash table
 * @key: key for index and to set in node
 * @value: value for node
 * Return: 1 if success or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t **ary = ht->array, *new, *ptr;

	if (key == NULL || strlen(key) == 0 || !ht)
		return (0);
	if (!ary[idx])
	{
		ary[idx] = malloc(sizeof(hash_node_t));
		if (ary[idx] == NULL)
			return (0);
		ary[idx]->key = strdup(key);
		ary[idx]->value = strdup(value);
		ary[idx]->next = NULL;
	}
	else if (ary[idx])
	{
		ptr = ary[idx];
		while (ptr)
		{
/*string compare for whether to create a new node or just update a key*/
			if (strcmp(key, ptr->key))
			{
				ptr->value = strdup(value);
				return (1);
			}
			ptr = ptr->next;
		}
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ary[idx];
		ary[idx] = new;
	}
	return (1);
}
