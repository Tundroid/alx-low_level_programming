#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strncat - appends one string unto another another
* @d: string to be appended
* @s: string to be copied
* @n: number of bytes to copy from src
*
* Return: pointer to destination buffer
*/
char *_strncat(char *d, char *s, int n)
{
	strncpy(d + strlen(d), s, (size_t)n > strlen(s) ? strlen(s) : (size_t)n);
	return (d);
}
