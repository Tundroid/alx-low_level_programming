#include "main.h"

/**
 * get_endianness - converst binary to unsigned int
 *
 * Return: sk
 */
int get_endianness(void)
{
	short num;

	num = 255;
	if (*(char *)(&num + sizeof(short) - 1) == num)
		return (0);
	else
		return (1);
}
