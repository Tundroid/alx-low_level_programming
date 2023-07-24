#include "main.h"
/**
* puts_half - prints half of a string
* @str: string to be printed
*/
void puts_half(char *str)
{
	int i = 0, n;

	while (*(str + i++) != '\0')
		;
	i--;
	n = i % 2 == 0 ? i / 2 : i - (i / 2);
	while (n <= i)
	{
		_putchar(*(str + n++));
	}
}
