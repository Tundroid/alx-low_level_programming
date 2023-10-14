#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - checks the last value of a random number
* whether it is 0, greater than 5 or in between
*
* Return: 0 upon successful execution
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
