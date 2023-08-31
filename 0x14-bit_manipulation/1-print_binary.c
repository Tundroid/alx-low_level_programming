#include "main.h"

/**
 * print_binary - converst binary to unsigned int
 * @n: binary string
 */
void print_binary(unsigned long int n)
{
	short lsb;

	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
	}
	else
	{
		lsb = n & 1;
		n >>= 1;
		print_binary(n);
		_putchar('0' + lsb);
	}
}
