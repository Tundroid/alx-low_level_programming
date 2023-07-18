#include "main.h"

/**
* jack_bauer - Print all minutes of the day
*
* Description: This function prints all the minutes
* of a day according the the movie 24 hours
*/
void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					_putchar(48 + h1);
					_putchar(48 + h2);
					_putchar(':');
					_putchar(48 + m1);
					_putchar(48 + m2);
					_putchar('\n');
					if (h1 == 2 && h2 == 3 && m1 == 5 && m2 == 9)
						return;
				}
			}
		}
	}
}
