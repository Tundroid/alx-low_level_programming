#include <stdio.h>

#define ASCII_0 48

/**
* main - prints combination of two-digit numbers
* without duplicate
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + ASCII_0);
			putchar(j + ASCII_0);
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
