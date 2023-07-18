#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of program
*
* Description: print characters using putchar
* Return: 0 upon successful execution
*/
int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; i < sizeof(string); i++)
		putchar(string[i]);
	putchar('\n');

	return (0);
}
