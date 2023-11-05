#include "hash_tables.h"

/**
 * hash_table_get - get hash node based on key
 * @ht: hash table
 * @key: data key
 *
 * Return: hash node or null if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *tmp = NULL;

	if (ht && *key)
	{
		index = key_index((unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				if (strcmp(tmp->key, key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
	}
	return (NULL);
}
