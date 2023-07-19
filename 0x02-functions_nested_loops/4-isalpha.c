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
	return ((c - 65 >= 0 && c - 65 <= 25) || (c - 97 >= 0 && c - 97 <= 25) ? 1 : 0);
}
