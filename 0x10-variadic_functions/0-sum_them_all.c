#include "variadic_functions.h"

/**
* sum_them_all - sums all paramteters from the second
* @n: variable param count
* ...: varaible params
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned long int i = 0;
	va_list list;

	va_start(list, n);
	for (; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
