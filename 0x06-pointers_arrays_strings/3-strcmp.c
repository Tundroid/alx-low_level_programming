#include "main.h"
/**
* _strcmp - copies n bytes of one string unto another another
* @s1: string one
* @s2: string two to be compared against s1
*
* Return: 0 is equat, -ve if s1 < s2 and +ve if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] < s2[i])
				return (-1);
			else if (s1[i] > s2[i])
				return (1);
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		else if (s1[i] == '\0')
		{
			return (-1);
		}
		else if (s2[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
