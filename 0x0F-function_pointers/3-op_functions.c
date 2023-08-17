#include "3-calc.h"

/**
* op_add - adds two integers
* @a: augend
* @b: addend
*
* Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts an integer from another
* @a: minuend
* @b: subtrahend
*
* Return: difference between a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two integers
* @a: multiplicand
* @b: multiplier
*
* Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides an integer by another
* @a: dividend
* @b: divisor
*
* Description: prints Error if divisor is 0 and
* exits with code 100
* Return: integral of a on b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - divides an integer by another
* @a: dividend
* @b: divisor
*
* Description: prints Error if divisor is 0 and
* exits with code 100
* Return: remainder of a on b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

