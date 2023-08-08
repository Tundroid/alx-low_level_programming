#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* argstostr - concatenates all command line args
* @ac: number of command line args
* @av: array of command line args
*
* Return: array pointer to str
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	str = malloc(size + ac + sizeof(char));

	if (str != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			strcat(str, av[i]);
			strcat(str, "\n");
		}
	}

	return (str);
}
