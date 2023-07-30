#include "main.h"
#include <math.h>
#include <stdlib.h>

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
		x = n / pow(10, radix_power--);
		_putchar(x % 10 + 48);
	}
}
