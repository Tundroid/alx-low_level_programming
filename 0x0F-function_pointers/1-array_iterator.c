#include "function_pointers.h"

/**
* array_iterator - calls back a function on every
* element of an array
* @array: array of elements to be passed to the callback
* @size: number of elements in array
* @action: callback function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
		for (; i < size;)
			action(*(array + i++));
}
