#include "main.h"

/**
 * flip_bits - converst binary to unsigned int
 * @n: binary string
 * @m: s
 *
 * Return: sk
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	short flips = 0;

	while (m || n)
	{
		flips += (m & 1) != (n & 1) ? 1 : 0;
		m >>= 1;
		n >>= 1;
	}
	return (flips);
}
