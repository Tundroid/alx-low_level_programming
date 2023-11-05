#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *tmp = NULL;
	bool first = true;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			first = false;
		}
	}
	printf("}\n");
}
