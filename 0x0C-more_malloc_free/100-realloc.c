#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _realloc - dynamically re-allocates memory
* formally allocated using malloc
* @ptr: pointer to former allocation
* @old_size: size of former allocation
* @new_size: size of new allocation
*
* Return: pointer to newly allocated memory location
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	if (arr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	memcpy(arr, ptr, old_size);
	free(ptr);
	return (arr);
}
