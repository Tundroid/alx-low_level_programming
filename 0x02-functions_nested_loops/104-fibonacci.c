#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	uint64_t n = 2, n_prev = 1;
	uint64_t i = 3, tmp;

	printf("%" PRIu64 ", %" PRIu64 ", ", n_prev, n);

	for ( ; i <= 98; i++)
	{
		tmp = n_prev;
		n_prev = n;
		n += tmp;
		printf("%" PRIu64, n);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
