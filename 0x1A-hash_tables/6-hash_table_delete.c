#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *tmp, *node;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht);
}
