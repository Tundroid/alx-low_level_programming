#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements in an array
* @a: array of integers
* @n: number of elements to be printed
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n;)
	{
		printf("%d", *(a + i));
		if (++i != n)
			printf(", ");
	}
	printf("\n");
}
