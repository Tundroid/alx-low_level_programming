#include "main.h"

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

	conv = 0;
	i = 1;
	if (b && *b)
	{
		n = strlen(b);
		while (--n >= 0)
		{
			if (*(b + n) != '0' && *(b + n) != '1')
				return (0);
			conv += (*(b + n) - '0') * i;
			i *= 2;
		}
	}
	return (conv);
}