#include "search_algos.h"

/**
 * linear_search - Linear search algorithm on array
 *
 * @array: of integers
 * @size: of array
 * @value: to be search
 * Return: value's index on array if found, otherwise, -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array)
	{
		for (i = 0; i < (int)size; i++)
		{
			printf("Value checked array[%u] = [%d]\n", i, *(array + i));
			if (value == *(array + i))
				return (i);
		}
	}
	return (-1);
}