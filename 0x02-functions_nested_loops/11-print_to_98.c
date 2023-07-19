#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Print all natural numbers from n to 98
* @n: starting point natural number
*/
void print_to_98(int n)
{
	while (1)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
		else
			break;
	}
	printf("\n");
}
