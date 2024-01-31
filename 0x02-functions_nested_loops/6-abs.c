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
	int u = c - 65;
	int l = c - 97;

	return ((u >= 0 && u <= 25) || (l >= 0 && l <= 25) ? 1 : 0);
}
