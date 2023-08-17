#include "variadic_functions.h"

#define s_check(s) ((s == NULL) ? ("(nil)") : (s))

/**
* print_all - prints varaible params types
* @format: format to print
* ...: varaible params
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;
	char *s;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i++])
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
				s = va_arg(list, char *);
				printf("%s", s_check(s));
				break;
			default:
				continue;
		}
		if (i < (int)strlen(format))
			printf(", ");
	}
	va_end(list);
	printf("\n");
}
