#include <stdio.h>

/**
* main - prints alphabet in lowercase except q and e
*
* Return: 0 upon successful execution
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
