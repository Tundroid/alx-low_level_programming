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

	if (n == 0 && index == 0)
	{
		return (index);
	}
	else
	{
		while (n)
		{
			if (i++ == index)
				return (n & 1);
			n >>= 1;
		}
	}
	return (-1);
}
