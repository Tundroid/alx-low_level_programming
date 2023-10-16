#include "main.h"
#include <string.h>
/**
* _memcpy - copies n bytes from src buffer to dest buffer
* @dest: destination buffer
* @src: src buffer
* @n: number of bytes to be copied
*
* Return: pointer to dest buffer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
