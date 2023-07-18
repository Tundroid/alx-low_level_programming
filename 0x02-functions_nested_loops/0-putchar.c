#include "main.h"

/**
* main - Entry point of program
*
* Description: print characters using putchar
* Return: 0 upon successful execution
*/
int main(void)
{
	char string[] = "_putchar";
	unsigned int i;

	for (i = 0; i < sizeof(string); i++)
		_putchar(string[i]);
	_putchar('\n');

	return (0);
}
