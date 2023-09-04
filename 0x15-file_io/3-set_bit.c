#include "main.h"

/**
 * set_bit - converst binary to unsigned int
 * @n: binary string
 * @index: s
 *
 * Return: sk
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t i = 0, pow2 = 1;

	if (index > 64)
		return (-1);
	while (i <= index)
	{
		if (i == index)
		{
			*n |= pow2;
			break;
		}
		pow2 *= 2;
		i++;
	}
	return (1);
}
