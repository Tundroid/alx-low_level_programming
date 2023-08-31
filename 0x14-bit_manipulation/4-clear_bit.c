#include "main.h"

uint64_t _pow(int, int);

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
	unsigned long int m = *n, x = 0;
	short lsb = 0;

	if (index > 64)
		return (-1);
	while (i <= index)
	{
		lsb = m & 1;
		m >>= 1;
		if (i++ == index)
			continue;
		x |= lsb * _pow(2, i - 1);
	}
	*n &= x;
	return (1);
}

/**
* _pow - raises an integer to the power of another
* @b: base
* @p: power
*
* Return: b^p
*/
uint64_t _pow(int b, int p)
{
	if (p == 0)
		return (1);
	else if (p == 1)
		return (b);

	while (p > 0)
		return (b * _pow(b, --p));

	return (-1);
}
