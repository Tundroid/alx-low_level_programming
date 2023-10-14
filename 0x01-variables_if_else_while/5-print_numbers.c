#include <stdio.h>

/**
* main - prints all digits in base 10
*
* Return: 0 upon successful execution
*/
int main(void)
{
	char digit = '0';

	while (digit <= '9')
		putchar(digit++);
	putchar('\n');
	return (0);
}
