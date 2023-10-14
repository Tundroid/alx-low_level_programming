#include <stdio.h>

/**
* main - prints base 16 characters in lowercase
*
* Return: 0 upon successful execution
*/
int main(void)
{
	char letter = '0';

	while (letter <= '9')
		putchar(letter++);
	letter = 'a';
	while (letter <= 'f')
		putchar(letter++);
	putchar('\n');
	return (0);
}
