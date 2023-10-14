#include <stdio.h>

#define ASCII_0 48

int main(void);

/**
* main - prints all pobbile combinations of two two-digit numbers
* without repetition
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int i, j, k, l, cwl, cwr;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				l = 0;
				while (l <= 9)
				{
					cwl = i * 10 + j;
					cwr = k * 10 + l;
					if ((i == j && j == k && k == l) || (i == k && j == l) || (cwr < cwl))
					{
						l++;
						continue;
					}
					putchar(i + ASCII_0);
					putchar(j + ASCII_0);
					putchar(' ');
					putchar(k + ASCII_0);
					putchar(l + ASCII_0);
					if (i < 9 || j < 8 || k < 9 || l < 9)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
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
