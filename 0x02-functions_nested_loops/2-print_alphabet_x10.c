#include "main.h"
/**
* print_alphabet_x10 - Prints a-z 10 times
*
* Return: nothing
*/
void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 97; ch < (97 + 26); ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
