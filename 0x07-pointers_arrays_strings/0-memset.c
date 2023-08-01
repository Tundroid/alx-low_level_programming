#include "main.h"
#include <string.h>
/**
* _memset - sets n bytes of a buffer with a constant byte
* @s: memory buffer
* @b: byte used for filling
* @n: number of bytes to be filled with b
*
* Return: pointer to s buffer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
