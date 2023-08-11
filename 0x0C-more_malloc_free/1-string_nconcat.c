#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
* string_nconcat - concatenates two strings using
* n bytes from the second string
* @s1: string 1
* @s2: string 2
* @n: number of bytes from s2 to be used
*
* Return: pointer to concatinated string or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = n >= strlen(s2) ? strlen(s2) : n;
	str = malloc(strlen(s1) + n + 1);
	if (str != NULL)
	{
		strcpy(str, s1);
		strncat(str, s2, n);
	}
	return (str);
}
