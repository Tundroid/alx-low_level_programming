#include "variadic_functions.h"

/**
* print_numbers - prints varaible params
* @separator: delimiter
* @n: variable param count
* ...: varaible params
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned long int i = 0;
	va_list list;

	if (separator != NULL || n > 0)
	{
		va_start(list, n);
		for (; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		va_end(list);
	}
	printf("\n");
}
