#include "main.h"

int _pow(int, int);
/**
 * binary_to_uint - converst binary to unsigned int
 * @b: binary string
 *
 * Return: conversion or zero is string is not in binary or null
 */
unsigned int binary_to_uint(const char *b)
{
	size_t conv, i;
	int n;

	conv = i = 0;
	if (b && *b)
	{
		n = strlen(b);
		while (--n >= 0)
		{
			if (*(b + n) != '0' && *(b + n) != '1')
				return (0);
			conv += (*(b + n) - '0') * _pow(2, i++);
		}
	}
	return (conv);
}

/**
* _pow - raises an integer to the power of another
* @b: base
* @p: power
*
* Return: b^p
*/
int _pow(int b, int p)
{
	if (p == 0)
		return (1);
	else if (p == 1)
		return (b);

	while (p > 0)
		return (b * _pow(b, --p));

	return (-1);
}
