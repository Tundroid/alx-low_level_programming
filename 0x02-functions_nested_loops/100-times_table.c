#include "main.h"

/**
* print_times_table - Print 0xn times table
* @n: times table factor
*/
void print_times_table(int n)
{
	int i, j, product, k, arr[] = {' ', ' ', ' ', '0'};

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			for (k = 3; k >= 0; k--)
			{
				if (product > 0)
				{
					arr[k] = 48 + product % 10;
					product /= 10;
				}
				else
				{
					break;
				}
			}

			for (k = 0; k < 4; k++)
			{
				if (j == 0)
				{
					_putchar(arr[3]);
					break;
				}
				else
				{
					_putchar(arr[k]);
				}
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
