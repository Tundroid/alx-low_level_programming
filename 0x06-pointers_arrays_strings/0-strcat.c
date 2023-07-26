#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strcat - appends one string unto another another
* @dest: string to be appended
* @src: string to be copied
*
* Return: pointer to destination buffer
*/
char *_strcat(char *dest, char *src)
{
	/* dest = malloc(strlen(dest) + strlen(src) + 1); */
	strcpy(dest + strlen(dest), src);
	return (dest);
}
