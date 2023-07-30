#include "main.h"
#include <stdlib.h>

int _pow(int, int);
/**
* print_number - prints an integer to the stdout
* @n: integer to be printed
*/
void print_number(int n)
{
	int x, m, radix_power = 0;

	if (n == 0)
	{
		_putchar(n + 48);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
	}
	m = n;
	while (m >= 10)
	{
		m =  m / 10;
		radix_power++;
	}
	/*
	* Using log below works, but for the
	* compilation flags used for the task
	* it cannot work with using -lm flag
	*/
	/* radix_power = log((double)abs(n)); */

	while (radix_power >= 0)
	{
		x = n / _pow(10, radix_power--);
		_putchar(x % 10 + 48);
	}
}


/**
* _pow - raises an integer to the power of another
* @b: base
* @p: power
*
* Return: b^p
*/
int _pow(int b, int p)
{
	if (p == 0)
		return (1);
	else if (p == 1)
		return (b);

	while (p > 0)
		return (b * _pow(b, --p));
	
	return (-1);
}
