#include "main.h"
#include <string.h>
/**
* _strspn - finds the legnth of a prefix substring
* @s: string buffer
* @accept: string prefix
*
* Return: length of accept if it is prefix of s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, found;

	while (s[i] != '\0')
	{
		j = found = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
			break;
		i++;
	}
	return (i);
}
