#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
    int i;

	for (i = 6; i < 12; i++)
	{
    concat = string_nconcat("Best ", "School !!!", i);
    printf("%s\n", concat);
    }
    free(concat);
    return (0);
}
