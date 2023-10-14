#include <stdio.h>

/**
* main - prints all possible combinations of
* single-digit numbers
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit++ < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
