#include <stdio.h>

/**
* main - prints the alphabet in lowercase then uppercase
*
* Return: 0 upon successful execution
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	letter = 'A';
	while (letter <= 'Z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
