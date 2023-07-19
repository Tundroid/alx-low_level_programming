#include <stdio.h>
#include <stdint.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	int n = 2, n_prev = 1, tmp, sum = 0;

	while (n <= 4000000)
	{
		sum += n % 2 == 0 ? n : 0;
		tmp = n_prev;
		n_prev = n;
		n += tmp;
	}
	printf("%d\n", sum);
	return (0);
}
