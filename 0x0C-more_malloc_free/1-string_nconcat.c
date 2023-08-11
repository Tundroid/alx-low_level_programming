#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	char *tmp;
	int alloced_s1 = 0, alloced_s2 = 0;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		if (s1 == NULL)
			return (NULL);
		*s1 = '\0';
		alloced_s1 = 1;
	}

	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		if (s2 == NULL)
		{
			free(s1);
			return (NULL);
		}
		*s2 = '\0';
		alloced_s2 = 1;
	}

	tmp = malloc(strlen(s1) + 1);
	if (tmp == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}

	strcpy(tmp, s1);
	s1 = malloc(strlen(s1) + (n >= strlen(s2) ? strlen(s2) : n) + 1);
	if (s1 == NULL)
	{
		if (alloced_s1)
			free(s1);
		if (alloced_s2)
			free(s2);
		free(tmp);
		return (NULL);
	}
	strcpy(s1, tmp);
	strncat(s1, s2, n);
	if (alloced_s2)
		free(s2);
	free(tmp);
	return (s1);
}
