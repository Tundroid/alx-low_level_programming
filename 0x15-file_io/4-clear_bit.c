#include "main.h"

/**
 * clear_bit - converst binary to unsigned int
 * @n: binary string
 * @index: s
 *
 * Return: sk
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t i = 0;
	unsigned long int m = *n, x = 0, pow2 = 1;
	short lsb = 0;

	if (index > 64)
		return (-1);
	while (m)
	{
		lsb = m & 1;
		m >>= 1;
		if (i++ != index)
			x |= lsb * pow2;
		pow2 *= 2;
	}
	*n &= x;
	return (1);
}
