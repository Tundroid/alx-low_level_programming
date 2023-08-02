#include "main.h"
#include <string.h>
/**
* _puts_recursion - prints a string to stdout using recursion
* @s: string buffer
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
