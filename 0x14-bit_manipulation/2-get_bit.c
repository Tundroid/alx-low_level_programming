#include "main.h"

/**
 * get_bit - converst binary to unsigned int
 * @n: binary string
 * @index: s
 *
 * Return: sk
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t i = 0;

	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
