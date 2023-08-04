#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program to add all two integers passed
* in as command line args
* @argc: count of command line args
* @argv: pointer to array of strings of all
* command line args
*
* Return: 0 on successful execution or 1 in case
* program has a command line arg that is not an integer
*/

int main(int argc, char *argv[])
{
	int sum = 0, i;

	while (--argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			if (!isdigit(argv[argc][i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
