#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strdup - dynamically creates an array of chars
* @str: string to fill char array with
*
* Return: array pointer to str
*/
char *_strdup(char *str)
{
	char *arr;

	if (str == NULL)
		return (NULL);
	arr = malloc(strlen(str) + sizeof(char));
	if (arr != NULL)
	{
		strcpy(arr, str);
	}
	return (arr);
}
