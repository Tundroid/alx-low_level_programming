#include "main.h"

/**
* times_table - Print 0x9 times table
*
* Description: Prints 0x9 times tablers
*/
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j > 0 && product / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
			} else if (j > 0 && product / 10 != 0)
			{
				_putchar(' ');
			}

			if (product / 10 == 0)
			{
				_putchar(48 + product);
			} else
			{
				_putchar(48 + product / 10);
				_putchar(48 + product % 10);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
