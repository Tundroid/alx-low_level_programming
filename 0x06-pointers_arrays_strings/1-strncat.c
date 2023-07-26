#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strncat - appends one string unto another another
* @dest: string to be appended
* @src: string to be copied
* @n: number of bytes to copy from src
*
* Return: pointer to destination buffer
*/
char *_strncat(char *dest, char *src, int n)
{
	strncpy(dest + strlen(dest), src, (size_t)n > strlen(src) ? strlen(src) : (size_t)n);
	return (dest);
}
