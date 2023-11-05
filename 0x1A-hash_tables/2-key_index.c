#include "hash_tables.h"

/**
 * key_index - get index of key
 * @key: data key
 * @size: size of hash table array
 *
 * Return: index of @key on hash table array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
