#include <stdio.h>

/**
* main - prints combination of two-digit numbers
* without duplicate
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int i, j;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i < 56 || j < 57)
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
