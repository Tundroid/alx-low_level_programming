#include "main.h"
/**
* _isdigit - Checks for digit
* @c: ASCII code of digit to be checked
*
* Return: 1 if c is digit otherwise 0
*/
int _isdigit(int c)
{
	return ((c >= 48 && c <= (48 + 9)) ? 1 : 0);
}
