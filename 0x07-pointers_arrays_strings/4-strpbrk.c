#include "main.h"
#include <string.h>
/**
* _strpbrk - finds the first of occurence in a
* string of any bytes in another string
* @s: string being searched
* @accept: string whose individual bytes are being looked for
*
* Return: address of first occurence in s or NULL is none is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j, pos = -1;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				pos = pos == -1 || pos > i ? j : pos;
				break;
			}
			j++;
		}
		i++;
	}
	return (pos < 0 ? NULL : s + pos);
}
