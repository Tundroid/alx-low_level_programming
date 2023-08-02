#include "main.h"
#include <string.h>
/**
* factorial - finds the factorial of an number recursively
* @n: integer whose factorial is to be determined
*
* Return: Factorial of n
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
