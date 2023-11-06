#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - creates a sorted hash table
 * @size: array size of sorted hash table
 *
 * Return: pointer to sorted hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht)
	{
		ht->size = size;
		ht->array = (shash_node_t **)calloc(size, sizeof(shash_node_t *));
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
	}
	return (ht);
}

/**
 * shash_table_set - get index of key
 * @ht: hash table
 * @key: data key
 * @value: data value
 *
 * Return: 1 if successfully added otherwise 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = NULL;
	size_t index;
	shash_node_t *tmp, *track;

	if (ht && *key)
	{
		index = key_index((unsigned char *)key, ht->size);
		tmp = track = ht->array[index];
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
			if (strcmp(tmp->key, key) == 1)
				break;
			track = tmp;
			tmp = tmp->next;
		}
		new = malloc(sizeof(shash_node_t));
		if (new)
		{
			new->key = strdup(key);
			new->value = strdup(value);
			new->next = new->snext = new->sprev = NULL;
			if (new->key && new->value)
			{
				new->next = ht->array[index];
				ht->array[index] = new;
				if (!ht->shead)
				{
					ht->shead = ht->stail = new;
				}
				else if (tmp)
				{
					new->snext = tmp;
					new->sprev = tmp->sprev;
					tmp->sprev = new;
					if (new->sprev)
						new->sprev->snext = new;
					else
						ht->shead = new;
				}
				else if (track)
				{
					new->snext = track->snext;
					new->sprev = track;
					track->snext = new;
					if (new->snext)
						new->snext->sprev = new;
					else
						ht->stail = new;
				}
				else
				{
					if (key_index((__u_char *)key, ht->size) >
							key_index((__u_char *)ht->stail->key, ht->size))
					{
						new->snext = NULL;
						new->sprev = ht->stail;
						ht->stail->snext = new;
						ht->stail = new;
						return (1);
					}
					index++;
					while (index < ht->size && !ht->array[index])
						index++;
					if (index == ht->size)
						index--;
					new->snext = ht->array[index];
					new->sprev = ht->array[index]->sprev;
					ht->array[index]->sprev = new;
					if (new->sprev)
						new->sprev->snext = new;
					else
						ht->shead = new;
				}
				return (1);
			}
		}
	}
	return (0);
}

/**
 * shash_table_get - get hash node based on key
 * @ht: hash table
 * @key: data key
 *
 * Return: hash node or null if not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	size_t index;
	shash_node_t *tmp = NULL;

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

/**
 * hash_table_print_helper - sorted hash table print helper
 * @ht: hash table
 * @rev: determines if print should be in ASC or DESC (reversed)
*/
void hash_table_print_helper(const shash_table_t *ht, bool rev)
{
	shash_node_t *tmp = NULL;
	bool first = true;

	if (!ht)
		return;
	putchar('{');
	tmp = rev ? ht->stail : ht->shead;
	while (tmp)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = rev ? tmp->sprev : tmp->snext;
		first = false;
	}
	printf("}\n");
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	hash_table_print_helper(ht, false);
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	hash_table_print_helper(ht, true);
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	size_t i;
	shash_node_t *tmp, *node;

	if (!ht)
		return;
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
	free(ht->array);
	free(ht);
}
