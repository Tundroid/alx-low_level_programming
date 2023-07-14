#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - Entry point of program
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int i, j;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			if (i != j)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
					if (i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
