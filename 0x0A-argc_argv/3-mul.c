#include <stdio.h>
#include <stdlib.h>

/**
* main - program to multiply two integers passed
* in as command line args
* @argc: count of command line args
* @argv: pointer to array of strings of all
* command line args
*
* Return: 0 on successful execution or 1 in case
* program does not receive exactly 2 command line
* arguments
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
