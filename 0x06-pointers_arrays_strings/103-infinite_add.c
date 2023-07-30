#include "main.h"
#include <string.h>
#include <stdlib.h>

char *infinite_add(char*, char*, char*, int);
/**
* infinite_add - adds two non-negative integers
* @n1: string for number 1 to be added
* @n2: string for number 2 to be added
* @r: buffer for the result
* @size_r: size of result buffer
*
* Return: pointer to result buffer
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Cur, n2Cur, tmpCur, tmp, carry = 0, i = 0, maxlen;
	char *tmpRes;

	maxlen = strlen(n1) >= strlen(n2) ? strlen(n1) : strlen(n2);

	if (maxlen + 1 >= size_r)
		return (0);

	n1Cur = strlen(n1) - 1;
	n2Cur = strlen(n2) - 1;
	r = malloc(size_r);
	tmpRes = malloc(size_r);
	tmpCur = size_r - 1;
	tmpRes[tmpCur--] = '\0';

	while (1)
	{
		if (n1Cur >= 0 && n2Cur >= 0)
		{
			tmp = (n1[n1Cur--] - 48) + (n2[n2Cur--] - 48);
		}
		else
		{
			if (n1Cur < 0 && n2Cur < 0)
				break;
			else if (n1Cur < 0)
				tmp = n2[n2Cur--];
			else if (n2Cur < 0)
				tmp = n1[n1Cur--];
			tmp -= 48;
		}
		tmp += carry;
		tmpRes[tmpCur--] = 48 + tmp % 10;
		carry = tmp / 10;
	}
	if (carry)
		tmpRes[tmpCur] = 48 + carry;
	else
		tmpCur++;

	while (tmpCur <= size_r)
	{
		r[i++] = tmpRes[tmpCur++];
	}

	return (r);
}
