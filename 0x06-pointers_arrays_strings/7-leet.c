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
	int i = 0;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char code[] = {'4', '3', '0', '7', '1'};

	while (i < 6)
	{
		if (lower[i] == ch || upper[i] == ch)
		{
			ch = code[i];
			break;
		}
		i++;
	}
	return (ch);
}
