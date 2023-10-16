#include "main.h"
/**
* _isupper - Checks for upper case letter
* @c: ASCII code of letter to be checked
*
* Return: 1 if c is uppercase otherwise 0
*/
int _isupper(int c)
{
	return ((c >= 65 && c <= (65 + 25)) ? 1 : 0);
}
