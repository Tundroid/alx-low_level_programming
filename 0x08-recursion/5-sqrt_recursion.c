#include "main.h"
#include <string.h>
int sqrt_helper(int, int);
/**
* _sqrt_recursion - find the square root of an integer recursively
* @n: integer whose square root is to be determined
*
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 2));
}
/**
* sqrt_helper - find sqrt for numbers greater than 1
* @n: number
* @i: iterator
*
* Return: sqrt of n if perfect square of -1
*/
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, ++i));
}
