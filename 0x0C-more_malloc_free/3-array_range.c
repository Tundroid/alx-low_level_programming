#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* array_range - creates an array of integers and fills them from min to max
* @min: lowest value in array
* @max: heighest value in array
*
* Return: pointer to allocated memory location
*/
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr != NULL)
		for (i = min; i <= max; i++)
			arr[i - min] = i;
	return (arr);
}
