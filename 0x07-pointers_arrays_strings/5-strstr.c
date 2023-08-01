#include "main.h"
#include <string.h>
/**
* _strstr - finds the first occurence of a substring in a string
* @haystack: string being searched
* @needle: string to be looked for
*
* Return: address of beginning of the occurence in
* the haystack or NULL if needle is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, found = -1;

	if (strlen(needle) == 0)
	{
		while (haystack[i++] != '\0')
			;
		return (haystack + i);
	}
	while (haystack[i + j] != '\0' && needle[j] != '\0')
	{
		found = (haystack[i + j] == needle[j]) ? i : -1;
		if (found >= 0)
		{
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return ((found >= 0 && needle[j] == '\0') ? haystack + i : NULL);
}
