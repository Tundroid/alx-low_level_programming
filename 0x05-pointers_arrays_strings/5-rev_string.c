#include "main.h"
/**
* rev_string - reverses a string's order
* @s: string to be reversed
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (*(s + i++) != '\0')
		;
	i -= 2;
	while (j <= i / 2)
	{
		tmp = *(s + j);
		*(s + j) = *(s + i - j);
		*(s + i - j++) = tmp;
	}
}
