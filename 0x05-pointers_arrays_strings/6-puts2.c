#include "main.h"
/**
* puts2 - prints everyother character of a string to the stdout
* @str: string to be printed
*/
void puts2(char *str)
{
	int i = 0, j = 0;

	while (*(str + i++) != '\0')
		;
	while (j++ < i && *(str + j) != '\0')
		_putchar(*(str + j++ - 1));
	_putchar('\n');
}