#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
* print_buffer - prints a string buffer
* @b: string buffer to be printed
* @size: size of buffer
*/
void print_buffer(char *b, int size)
{
	int i = 0, j, null_flag;

	while (1)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j > size - 1)
			{
				printf("     ");
			}
			else
			{
				printf("%02x%02x ", b[j], b[j + 1]);
			}
			j++;
		}
		for (j = i; j < i + 10; j++)
		{
			if (j > size - 1)
			{
				null_flag = 1;
				break;
			}
			else
			{
				printf("%c", isprint(b[j]) ? b[j] : '.');
			}
		}
		i += 10;
		printf("\n");
		if (null_flag)
			break;
	}
}
