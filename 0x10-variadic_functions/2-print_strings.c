#include "variadic_functions.h"

/**
* print_strings - prints varaible params
* @separator: delimiter
* @n: variable param count
* ...: varaible params
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned long int i = 0;
	va_list list;
	char *tmp;

	if (separator != NULL)
	{
		va_start(list, n);
		for (; i < n; i++)
		{
			tmp = va_arg(list, char *);
			printf("%s", tmp == NULL ? "(nil)" : tmp);
			if (i < n - 1)
				printf("%s", separator);
		}
		va_end(list);
	}
	printf("\n");
}
