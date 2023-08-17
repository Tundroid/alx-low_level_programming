#include "variadic_functions.h"

/**
* print_all - prints varaible params types
* @format: format to print
* ...: varaible params
*/
void print_all(const char * const format, ...)
{
	int i = 0, ignored;
	va_list list;
	char *tmp;

	va_start(list, format);
	while (format[i] != '\0')
	{
		ignored = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			tmp = va_arg(list, char *);
			if (tmp == NULL)
				tmp = "(nil)";
			printf("%s", tmp);
			break;
		default:
			ignored = 1;
			break;
		}
		if (!ignored && i < (int)strlen(format) - 1)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
