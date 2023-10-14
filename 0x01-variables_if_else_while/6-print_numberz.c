#include <stdio.h>

#define ASCII_0 48

/**
* main - print all digits in base 10 without using char
*
* Return: 0 upon successful execution
*/
int main(void)
{
	short digit = 0;

	while (digit <= 9)
		putchar(digit++ + ASCII_0);
	putchar('\n');
	return (0);
}
