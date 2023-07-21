#include "main.h"
/**
* print_triangle - prints triangle using #
* @size: height length of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j > size - i)
				_putchar('#');
			else
				_putchar(' ');
		}
		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
