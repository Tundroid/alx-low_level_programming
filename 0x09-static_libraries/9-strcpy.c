#include "main.h"
/**
* _strcpy - copies one string unto another another
* @dest: destination of copied string
* @src: source of copied string
*
* Return: pointer to destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i++] == '\0')
			break;
	}
	return (dest);
}
