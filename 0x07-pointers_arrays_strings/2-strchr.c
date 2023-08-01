#include "main.h"
#include <string.h>
/**
* _strchr - searches a character in a string
* @s: string to be searched
* @c: character to be found
*
* Return: pointer to c's first occurence or NULL is c is not in string
*/
char *_strchr(char *s, char c)
{
	unsigned long int i = 0;

	while (i < strlen(s))
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
