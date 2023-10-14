#include <stdio.h>

/**
* main - prints alphabet in lowercase
*
* Return: 0 upon successful execution
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
