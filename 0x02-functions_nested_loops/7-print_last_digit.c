#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - prints the last digit of an integer
* @n: number whose last digit is to be printed
*
* Return: last digit of n
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	last_digit = abs(last_digit);
	_putchar(last_digit + 48);
	return (last_digit);
}
