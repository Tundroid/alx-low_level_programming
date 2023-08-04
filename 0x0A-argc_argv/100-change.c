#include <stdio.h>
#include <stdlib.h>

/**
* main - program to calculate min number of coins
* required to give change
* @argc: count of command line args
* @argv: pointer to array of strings of all
* command line args
*
* Return: 0 on successful execution or 1 in case
* program does not receive exactly i command line arg
*/

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[--argc]);
	if (cents >= 0)
	{
		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;
	}
	printf("%d\n", coins);
	return (0);
}
