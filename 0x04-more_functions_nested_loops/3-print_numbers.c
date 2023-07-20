#include "main.h"
/**
* print_numbers - prints 0 - 9 with new line
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 48 + 10; i++)
		_putchar(i);
	_putchar('\n');
}
