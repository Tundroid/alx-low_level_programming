#include "main.h"
/**
* s_strlen - counts the length of a string
* @s: string whose length is to be determined
*
* Return: length of s
*/
int s_strlen(char *s)
{
	int length = 0, i = 0;

	while (*(s + i++) != '\0')
		;
	return (--i);
}
