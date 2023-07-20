#include "main.h"
/**
*  more_numbers - ptints 0 - 14 with new line
*/
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
		{
			_putchar(i + 48);
		}
		else
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
	}
	_putchar('\n');
}
