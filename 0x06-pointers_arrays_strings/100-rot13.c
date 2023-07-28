#include "main.h"
#include <ctype.h>

/**
* rot13 - encrypts a string using rot13 ceasar cipher
* @s: string to be encrypted
*
* Return: pointer to string s buffer
*/
char *rot13(char *s)
{
	int i = 0, _case;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			_case = islower(s[i]) ? 'a' : 'A';
			s[i] = (s[i] +  13 - _case) % 26 + _case;
		}
		i++;
	}
	return (s);
}
