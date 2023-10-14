#include <stdio.h>

/**
* main - prints sizes of some primitive types in bytes
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %hd byte(s)\n", sizeof(char));
	printf("Size of an int: %hd byte(s)\n", sizeof(int));
	printf("Size of a long int: %hd byte(s)\n", sizeof(long));
	printf("Size of a long long int: %hd byte(s)\n", sizeof(long long));
	printf("Size of a float: %hd byte(s)\n", sizeof(float));
	return (0);
}
