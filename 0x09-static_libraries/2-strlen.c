#include "main.h"
/**
* _strlen - counts the length of a string
* @s: string whose length is to be determined
*
* Return: length of s
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i++) != '\0')
		;
	return (--i);
}
