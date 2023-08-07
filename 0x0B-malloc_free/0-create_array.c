#include "main.h"
#include <stdlib.h>
/**
* create_array - dynamically creates an array of chars
* @size: size of array to be created
* @c: initializes all array elements with c
*
* Return: array pointer
*/
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr != NULL)
	{
		while (size > 0)
			*(arr + --size) = c;
	}
	return (arr);
}
