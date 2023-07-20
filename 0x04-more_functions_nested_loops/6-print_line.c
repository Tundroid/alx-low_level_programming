#include "main.h"
/**
* print_line - prints line using _
* @n: length of line
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
