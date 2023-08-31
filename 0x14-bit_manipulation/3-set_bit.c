#include "main.h"

uint64_t _pow(int, int);

/**
 * set_bit - converst binary to unsigned int
 * @n: binary string
 * @index: s
 *
 * Return: sk
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t i = 0;

	while (i <= index)
	{
		if (i == index)
		{
			*n |= _pow(2, i);
			return (1);
		}
		i++;
	}
	return (-1);
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
