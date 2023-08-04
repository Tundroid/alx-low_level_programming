#include <stdio.h>

/**
* main - program to print it's name
* @argc: count of command line args
* @argv: pointer to array of strings of all
* command line args
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
