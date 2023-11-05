#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: array size of hash table
 *
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(size * sizeof(hash_node_t));

	if (ht)
		bzero(ht, size * sizeof(hash_node_t));
	return (ht);
}
