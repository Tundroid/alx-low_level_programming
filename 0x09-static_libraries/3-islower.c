#include "main.h"
/**
* _islower - Checks for lower case letter
* @c: ASCII code of letter to be checked
*
* Return: 1 if c is lowercase otherwise 0
*/
int _islower(int c)
{
	return ((c >= 97 && c <= (97 + 25)) ? 1 : 0);
}
