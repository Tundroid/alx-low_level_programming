#include "main.h"
/**
* swap_int - Swap two integers using pointers
* @a: pointer to fist integer to be swapped
* @b: pointer to second integer to be swapped
*/
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}
