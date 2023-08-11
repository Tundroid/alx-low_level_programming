#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _calloc - dynamically allocates memory for an array
* @nmemb: size of array
* @size: size of each array element
*
* Return: pointer to allocated memory location
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr != NULL)
		memset(arr, '\0', nmemb * size);
	return (arr);
}
