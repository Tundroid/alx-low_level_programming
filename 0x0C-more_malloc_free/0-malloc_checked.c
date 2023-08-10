#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* malloc_checked - dynamically allocates memory for int array
* @b: expected size of int array
*
* Return: pointer to allocated memory location
*/
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
