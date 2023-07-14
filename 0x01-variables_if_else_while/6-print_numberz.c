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
	int digit = 48;

	while (digit <= 57)
		putchar(digit++);
	putchar('\n');
	return (0);
}
