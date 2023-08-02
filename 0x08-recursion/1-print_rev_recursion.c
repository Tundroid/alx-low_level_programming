#include "main.h"
#include <string.h>
/**
* _print_rev_recursion - prints a string to stdout using recursion in reverse
* @s: string buffer
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
