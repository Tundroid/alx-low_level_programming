#include "main.h"
/**
* print_rev - prints a string to the stdout in reverse order
* @s: string to be printed
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i++) != '\0')
		;
	i -= 2;
	while (i >= 0)
		_putchar(*(s + i--));
	_putchar('\n');
}
