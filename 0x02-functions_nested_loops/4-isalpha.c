#include <stdio.h>
#include "main.h"

/**
* _isalpha - Checks for an alphabet letter
* @c: ASCII code of letter to be checked
*
* Return: 1 if c is an alphabet letter otherwise 0
*/
int _isalpha(int c)
{
	printf("Passed value of c: %c\n", c);
	if (c - 65 <= 25)
	{
		return (1);
	} else if (c - 97 <= 25)
	{
		return (1);
	} else
		return 0;
	/*return (c - 65 <= 25 || c - 97 <= 25 ? 1 : 0);*/
}
