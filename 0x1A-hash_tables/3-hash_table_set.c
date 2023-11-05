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
	hash_node_t *tmp;

	if (ht && new && *key)
	{
		index = key_index((unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				if (strcmp(tmp->key, key) == 0)
				{
					tmp->value = realloc(tmp->value, strlen(value) + 1);
					if (tmp->value)
					{
						strcpy(tmp->value, value);
						return (1);
					}
					else
					{
						return (0);
					}
				}
				tmp = tmp->next;
			}
		}
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		if (new->key && new->value)
		{
			new->next = ht->array[index];
			ht->array[index] = new;
			return (1);
		}
	}
	return (0);
}
