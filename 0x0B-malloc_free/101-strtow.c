#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* strtow - splits a string into words
* @str: string to be split
*
* Return: array pointer to str
*/
char **strtow(char *str)
{
	char **words;
	int i, j = 0, w_start = -1, w_stop = -1, wc = 0;

	if (strlen(str) == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (int)strlen(str); i++)
	{
		if (str[i == 0 ? i : i - 1] != ' ' && (str[i] == ' ' || str[i] == '\0'))
			wc++;
	}
	words = (char **)malloc((wc > 0 ? ++wc : wc) * sizeof(char *));
	if (words != NULL)
	{
		for (i = 0; i <= (int)strlen(str); i++)
		{
			if (str[i] != ' ' && str[i] != '\0' && w_start <= w_stop)
				w_start = i;
			if ((str[i] == ' ' || str[i] == '\0') && w_stop < w_start)
			{
				w_stop = i - 1;
				words[j] = (char *)malloc(w_stop - w_start + 2);
				if (words[j] == NULL)
				{
					while (--j >= 0)
						free(words[j]);
					free(words);
					return (NULL);
				}
				strncpy(words[j], str + w_start, w_stop - w_start + 1);
				j++;
				w_start = w_stop = -1;
			}
		}
	}
	words[wc - 1] = NULL;
	return (words);
}
