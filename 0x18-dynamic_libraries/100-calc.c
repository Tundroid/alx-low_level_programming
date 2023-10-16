#include "100-calc.h"

/**
* add - adds two integers
* @a: augend
* @b: addend
*
* Return: sum of a and b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
* sub - subtracts an integer from another
* @a: minuend
* @b: subtrahend
*
* Return: difference between a and b
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two integers
* @a: multiplicand
* @b: multiplier
*
* Return: product of a and b
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divides an integer by another
* @a: dividend
* @b: divisor
*
* Description: prints Error if divisor is 0 and
* exits with code 100
* Return: integral of a on b
*/
int div(int a, int b)
{
	return (a / b);
}

/**
* mod - divides an integer by another
* @a: dividend
* @b: divisor
*
* Description: prints Error if divisor is 0 and
* exits with code 100
* Return: remainder of a on b
*/
int mod(int a, int b)
{
	return (a % b);
}

