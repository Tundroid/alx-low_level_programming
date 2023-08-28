#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void mul(char*, char*);
/**
* main - program entry point
* @argc: command line args count
* @argv: command line args vector
*
* Description: if the number of command line args
* is not exactly 3 or if either command line args
* 1 or 2 are not consisting only of digits, Error
* is printed and the program exits with status code 98
* Return: 0 always
*/
int main(int argc, char **argv)
{
	int i, j, check, set0, set1;
	char *multiplicand, *multiplier;

	multiplicand = *(argv + 1);
	multiplier = *(argv + 2);
	set0 = set1 = i = j = 0;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (*(*(argv + 1) + i) != '\0' || *(*(argv + 2) + j) != '\0')
	{
		check = *(*(argv + 1) + i) == '\0' || isdigit(*(*(argv + 1) + i));
		check *= *(*(argv + 2) + j) == '\0' || isdigit(*(*(argv + 2) + j));
		if (!check)
		{
			printf("Error\n");
			exit(98);
		}
		if (*(*(argv + 1) + i) != '0' && !set0)
			set0++;
		if (*(*(argv + 2) + j) != '0' && !set1)
			set1++;
		if (*(*(argv + 1) + i) == '0' && !set0)
			multiplicand++;
		if (*(*(argv + 2) + j) == '0' && !set1)
			multiplier++;
		i = *(*(argv + 1) + i) != '\0' ? i + 1 : i;
		j = *(*(argv + 2) + j) != '\0' ? j + 1 : j;
	}
	mul(multiplicand, multiplier);
	return (0);
}

/**
* mul - multipliers two integers of any length
* @multiplicand: paramter
* @multiplier: paramer
*/
void mul(char *multiplicand, char *multiplier)
{
	int len0 = strlen(multiplicand);
	int len1 = strlen(multiplier);
	int r_len = len0 + len1;
	short digit0, digit1, tmp;
	short *result;
	int i;

	r_len *= (bool)(len0 && len1);
	if (r_len == 0)
	{
		printf("0\n");
		return;
	}
	result = malloc(r_len * sizeof(short));
	if (!result)
		return;
	bzero(result, r_len * sizeof(short));
	while (--len0 >= 0)
	{
		digit0 = multiplicand[len0] - '0';
		tmp = 0;
		while (--len1 >= 0)
		{
			digit1 = multiplier[len1] - '0';
			tmp += result[len0 + len1 + 1] + digit0 * digit1;
			result[len0 + len1 + 1] = tmp % 10;
			tmp /= 10;
		}
		if (tmp > 0)
			result[len0 + len1 + 1] += tmp;
		len1 = strlen(multiplier);
	}
	if (result[0] != 0)
		putchar('0' + result[0]);
	for (i = 1; i < r_len; i++)
		putchar('0' + result[i]);
	putchar('\n');
	free(result);
}
