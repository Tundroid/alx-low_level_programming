#include "main.h"
#include <string.h>
int pal_helper(char*, int, int);
/**
* is_palindrome - checks if a string is a palindrome
* @s: string buffer
*
* Return: 1 if s is palindrome else 0
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (pal_helper(s, 0, strlen(s) - 1));
	}
}

/**
* pal_helper - does palindrome comparison
* @s: string buffer
* @left: left position
* @right: right position
*
* Return: 1 if s is palindrome else 0
*/
int pal_helper(char *s, int left, int right)
{
	if (s[left] != s[right])
	{
		return (0);
	}
	else
	{
		if (left >= (int) strlen(s) / 2)
			return (1);
		else
			return (pal_helper(s, ++left, --right));
	}
}
