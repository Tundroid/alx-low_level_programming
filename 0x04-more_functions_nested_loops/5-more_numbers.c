#include "main.h"
/**
*  more_numbers - ptints 0 - 14 with new line
*/
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0;  j < 15; j++)
		{

			for (k = 0; k < ((j > 9) ? 2 : 1); k++)
			{
				l = j;
				if (k == 0 && j > 9)
					l /= 10;
				else
					l %= 10;
				_putchar(l + 48);
			}
		}
		_putchar('\n');
	}
}
