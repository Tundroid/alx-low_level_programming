#include <stdio.h>

#define ASCII_0 48

/**
* main - prints all possible combinations of
* single-digit numbers
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + ASCII_0);
		if (digit++ < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
