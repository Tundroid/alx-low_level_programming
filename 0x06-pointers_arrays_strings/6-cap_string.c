#include "main.h"
#include <ctype.h>

int _ispunct(char);
/**
* cap_string - capitalizes all words of a string
* @s: string whose words are to be capitalized
*
* Return: pointer to string s buffer
*/
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (s);
	else if (islower(s[i]))
		s[i] = toupper(s[i]);
	s[i] = s[i] == '\t' ? ' ' : s[i];
	while (s[++i] != '\0')
	{
		if (_ispunct(s[i - 1]) && islower(s[i]))
			s[i] = toupper(s[i]);
		/* s[i] = s[i] == '\t' ? ' ' : s[i]; */
	}
	return (s);
}

/**
* _ispunct - Checks if a character is space, tabulation,
* new line, ,, ;, ., !, ?, ", (, ), {, or }
* @ch: Character to be checked
*
* Return: 1 if character is punctuation according to
* my locale defined above else returns 0
*/
int _ispunct(char ch)
{
	int punct = 0;

	switch (ch)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		punct = 1;
		break;
	default:
		break;
	}
	return (punct);
}
