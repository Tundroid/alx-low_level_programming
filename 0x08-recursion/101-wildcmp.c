#include "main.h"
#include <string.h>

int wild_helper(int, int, char *, char *);
int wild_loop(char *, int, int);
/**
 * wildcmp - string compare using wildcard *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if s1 and s2 are identical else 0
 */
int wildcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	return (wild_helper(s1_len - 1, s2_len - 1, s1, s2));
}

/**
 * wild_helper - does wilcard comparison comparison
 * @s1_len: text length
 * @s2_len: pattern length
 * @s1: text string buffer
 * @s2: pattern string buffer
 *
 * Return: 1 if s is palindrome else 0
 */
int wild_helper(int s1_len, int s2_len, char *s1, char *s2)
{
	int i = 0;
	int (*wh)(int, int, char *, char *) = wild_helper;

	if (s2_len < 0 && s1_len < 0)
		return (1);
	if (s2_len < 0 && s1_len >= 0)
		return (0);
	if (s1_len < 0 && s2_len >= 0)
		return (wild_loop(s2, i, s2_len));
	if (s2[s2_len] == s1[s1_len])
		return (wh(s1_len - 1, s2_len - 1, s1, s2));
	if (s2[s2_len] == '*')
		return (wh(s1_len, s2_len - 1, s1, s2) || wh(s1_len - 1, s2_len, s1, s2));
	return (0);
}

/**
* wild_loop - substitute iteration
* @pattern: string
* @iterator: pattern cursor
* @length: pattern length
*
* Return: 1 if pattern is a match or 0
*/
int wild_loop(char *pattern, int iterator, int length)
{
	if (iterator == length)
		return (1);
	if (*(pattern + iterator) == '*')
		return (wild_loop(pattern, iterator++, length));
	return (0);
}
