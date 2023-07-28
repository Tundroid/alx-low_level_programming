#include "main.h"

char _toleet(char);
/**
* leet - converts string to leet string
* @s: string to be converted
*
* Return: pointer to string s buffer
*/
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = _toleet(s[i]);
		i++;
	}
	return (s);
}

/**
* _toleet - Checks if a character is a, A, e, E, o, O, t, T, l, or L
* @ch: Character to be checked
*
* Return: leet character if ch is found above otherwise character itself
*/
char _toleet(char ch)
{
	switch (ch)
	{
	case 'a':
	case 'A':
		ch = '4';
		break;
	case 'e':
	case 'E':
		ch = '3';
		break;
	case 'o':
	case 'O':
		ch = '0';
		break;
	case 't':
	case 'T':
		ch = '7';
		break;
	case 'l':
	case 'L':
		ch = '1';
		break;
	default:
		break;
	}
	return (ch);
}
