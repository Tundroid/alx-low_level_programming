#include <stdio.h>

/**
* main - print alphabet in lowercase and in reverse
*
* Return: 0 upon successful execution
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
