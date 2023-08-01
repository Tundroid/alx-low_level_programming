#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* set_string - sets a string from value from a pointer to another string
* @s: string to be set
* @to: string being set
*/
void set_string(char **s, char *to)
{
	*s = to;
}
