#include <stdio.h>
#include "main.h"

/**
* print_sign - Checks is a number is +, - or 0
* @n: n, number to be checked
*
* Return: 1 if n is +, 0 if n is 0 and -1 if n is -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
