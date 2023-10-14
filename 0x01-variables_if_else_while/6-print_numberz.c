#include <stdio.h>

/**
* main - print all digits in base 10 without using char
*
* Return: 0 upon successful execution
*/
int main(void)
{
	short digit = 48;

	while (digit <= 57)
		putchar(digit++);
	putchar('\n');
	return (0);
}
