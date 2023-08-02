#include "main.h"
#include <string.h>
int prime_helper(int, int, int);
/**
* is_prime_number - checks if a number is prime or not
* @n: integer to be checked for primeness
*
* Return: 1 if n prime else 0
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_helper(n, 2, 2));
}
/**
* prime_helper - counts number of factors of a number
* @n: number
* @i: iterator
* @count: factors count
*
* Return: 0 if count is > 2 or 1
*/
int prime_helper(int n, int i, int count)
{
	if (i <= n / 2)
	{
		count = count + ((n % i == 0) ? 1 : 0);
		if (count > 2)
			return (0);
		else
			return (prime_helper(n, ++i, count));
	}
	else
	{
		if (count > 2)
			return (0);
		else
			return (1);
	}
}
