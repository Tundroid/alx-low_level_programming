#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* str_concat - concatenates two strings
* @s1: destination string
* @s2: string two
*
* Return: array pointer to str
*/
char *str_concat(char *s1, char *s2)
{
	char *tmp;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char));
		*s1 = '\0';
	}

	if (s2 == NULL)
	{
		s2 = (char *)malloc(sizeof(char));
		*s2 = '\0';
	}
	tmp = (char *)malloc(strlen(s1) + sizeof(char));
	if (tmp == NULL)
		return (NULL);
	strcpy(tmp, s1);
	s1 = (char *)malloc(strlen(s1) + strlen(s2) + sizeof(char));
	if (s1 != NULL)
	{
		strcat(s1, tmp);
		strcat(s1, s2);
	}
	return (s1);
}
