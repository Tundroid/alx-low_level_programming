#include "function_pointers.h"

/**
* int_index - searches an integer in an array
* @array: array of elements to be searched
* @size: number of elements in array
* @cmp: comparator callback function
*
* Return: index of array element if found else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
		for (; i < size; i++)
			if (cmp(*(array + i)) != 0)
				return (i);
	return (-1);
}
