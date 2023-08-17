#include <stdio.h>
#include <stdlib.h>

/**
* main - program Entry point
* @argc: number of command line args
* @argv: command line args vector
*
* Return: always 0
*/
int main(int argc, char **argv)
{
	int (*main_ptr)(int, char**);
	int i = 0, bytes;

	main_ptr = &main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *opcode = (unsigned char *)main_ptr;

	for (i; i < bytes; i++)
	{
		printf("%02x", opcode[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
