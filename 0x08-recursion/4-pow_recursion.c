#include "main.h"
#include <string.h>
/**
* _pow_recursion - raises an integer to the power
* of another integer recursively
* @x: base
* @y: power
*
* Return: x ^ y
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
