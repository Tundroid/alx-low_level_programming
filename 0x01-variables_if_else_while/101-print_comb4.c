#include <stdio.h>

#define ASCII_0 48

/**
* main - prints all combinations of three-digit numbers
* without repetition
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int i, j, k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				if (i != j && j != k)
				{
					putchar(i + ASCII_0);
					putchar(j + ASCII_0);
					putchar(k + ASCII_0);
					if (i < 7 || j < 8 || k < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
