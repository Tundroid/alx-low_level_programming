#include <stdio.h>
#include <stdint.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	int64_t n = 2, n_prev = 1;
	int64_t i = 3, tmp;

	printf("%ld, %ld, ", n_prev, n);

	for ( ; i <= 50; i++)
	{
		tmp = n_prev;
		n_prev = n;
		n += tmp;
		printf("%ld", n);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
