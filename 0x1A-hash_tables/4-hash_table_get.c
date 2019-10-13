#include "hash_tables.h"
/**
 * hash_table_get - returns the value of a hash table at an index
 * @ht: pointer to a hash table
 * @key: the key for the nodes
 * Return: the value at the paticular index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht || ht->array == NULL || !key)
		return (NULL);
	if (!ht->array[key_index((const unsigned char *)key, ht->size)])
		return (NULL);
	if (!ht->array[key_index((const unsigned char *)key, ht->size)]->value)
		return (NULL);
	return (ht->array[key_index((const unsigned char *)key, ht->size)]->value);
}
