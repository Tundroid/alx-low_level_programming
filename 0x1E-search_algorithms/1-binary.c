#include "search_algos.h"

/**
 * recursive_search - Binary search algorithm
 *
 * @array: of integers
 * @size: of array
 * @value: value to be searched
 * Return: index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (!array || !size)
		return (-1);
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", *(array + i));
	printf("\n");
	if (half && size % 2 == 0)
		half--;
	if (value == *(array + half))
		return ((int)half);
	if (value < *(array + half))
		return (recursive_search(array, half, value));
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: of array
 * @value: to be searched
 * Return: index of value if found, else, -1
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);
	if (index >= 0 && *(array + index) != value)
		return (-1);
	return (index);
}

