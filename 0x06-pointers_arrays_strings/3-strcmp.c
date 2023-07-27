#include "main.h"
/**
* _strcmp - copies n bytes of one string unto another another
* @s1: string one
* @s2: string two to be compared against s1
*
* Return: 0 is equat, -ve if s1 < s2 and +ve if s1 > s2
*/
char *_strcmp(char *s1, char *s2)
{
	int i = 0, n;
	n = strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);

	while (1)
	{
		if (s1[i] != '\0' 
		dest[i] = src[i];
		if (i == n - 1 || src[i++] == '\0')
			break;
	}
	return (dest);
}
