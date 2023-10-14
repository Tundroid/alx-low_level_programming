#include <stdio.h>

/**
* main - prints all combinations of three-digit numbers
* without repetition
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int i, j, k;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				if (i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55 || j < 56 || k < 57)
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
