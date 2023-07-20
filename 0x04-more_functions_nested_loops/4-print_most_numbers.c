#include "main.h"
/**
* print_most_numbers - prints 0 - 9, excluding 2 and 4 with new line
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
	{
		if (i == 48 + 2 || i == 48 + 4)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
