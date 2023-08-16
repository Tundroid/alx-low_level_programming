#include "function_pointers.h"

/**
* print_name - prints a string using a callback
* @name: string to be printed
* @f: callback function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
