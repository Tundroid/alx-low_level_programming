#include <stdio.h>
#include <stdint.h>

int isPrime(int);

/**
* main - Program Entry Point
*
* Return: always 0
*/
int main(void)
{
	int64_t i, heighest = 1, check = 612852475143;

	for (i = 1; i <= check / 2; i++)
	{
		if (isPrime(i) && check % i == 0)
			heighest = i;
	}
	printf("%ld\n", heighest);
	return (0);
}

/**
* isPrime - checks if a number is prime
* @n: number to be checked
*
* Return: 0 is n is not prime and 1 if n is prime
*/
int isPrime(int n)
{
	int i;

	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
