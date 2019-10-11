#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);
	newhash->size = size;
	newhash->array = calloc(size, sizeof(hash_node_t));
	if (newhash->array == NULL)
		return (NULL);
	return (newhash);
}
