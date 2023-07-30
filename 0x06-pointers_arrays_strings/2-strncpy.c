#include "main.h"
#include <string.h>
/**
* _strncpy - copies n bytes of one string unto another another
* @dest: destination of copied string
* @src: source of copied string
* @n: number of bytes to be copied
*
* Return: pointer to destination buffer
*/
char *_strncpy(char *dest, char *src, int n)
{
	/* int i = 0; */

	/*
	while (1)
	{
		dest[i] = src[i];
		if (i == n - 1 || src[i++] == '\0')
			break;
	}
	*/
	strncpy(dest, src, n);
	return (dest);
}
