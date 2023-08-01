#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints sum of leading and anti diagonals
* @a: matrix or 2D array
* @size: array size, size x size
*/
void print_diagsums(int *a, int size)
{
	int i = 0, main, anti;

	main = anti = 0;
	while (i < size)
	{
		main += *(a + i * size + i);
		anti += *(a + size * size - size * (i + 1) + i);
		i++;
	}
	printf("%d, %d\n", main, anti);
}
