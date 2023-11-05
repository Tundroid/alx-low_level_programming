#include "hash_tables.h"

/**
 * hash_table_set - get index of key
 * @ht: hash table
 * @key: data key
 * @value: data value
 *
 * Return: 1 if successfully added otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	size_t index;

	if (ht && new && *key)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		if (new->key && new->value)
		{
			index = key_index((unsigned char *)key, ht->size);
			if (ht->array[index])
			{
				ht->array[index]->value = realloc(ht->array[index]->value,
													strlen(value) + 1);
				if (ht->array[index]->value)
					strcpy(ht->array[index]->value, value);
			}
			else
			{
				new->next = ht->array[index];
				ht->array[index] = new;
			}
			return (1);
		}
	}
	return (0);
}
