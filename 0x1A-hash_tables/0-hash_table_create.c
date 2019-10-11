#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *newhash;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);
	newhash->size = size;
	newhash->array = malloc(sizeof(hash_node_t *) * newhash->size);
	if (newhash->array == NULL)
		return (NULL);
	while (x < size)
		newhash->array[x++] = NULL;
	return (newhash);
}
