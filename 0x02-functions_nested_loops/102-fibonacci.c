#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long long n = 2, n_prev = 1;
	unsigned long long i = 3, tmp;

	printf("%llu, %llu, ", n_prev, n);

	for ( ; i <= 50; i++)
	{
		tmp = n_prev;
		n_prev = n;
		n += tmp;
		printf("%llu", n);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
