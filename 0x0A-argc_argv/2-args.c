#include <stdio.h>

/**
* main - program to print all command
* line args on separate lines
* @argc: count of command line args
* @argv: pointer to array of strings of all
* command line args
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i = -1;

	while (++i < argc)
		printf("%s\n", argv[i]);
	return (0);
}
