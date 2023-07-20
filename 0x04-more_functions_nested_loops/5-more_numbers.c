#include "main.h"
/**
*  more_numbers - ptints 0 - 14 with new line
*/
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0;  j < 15; j++)
		{
			int tmp = j;

			for (k = 0; k < (j > 9) ? 2 : 1; k++)
			{
				if (k == 0 && j > 9)
					tmp /= 10;
				else
					tmp %= 10;
				_putchar(tmp + 48);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
