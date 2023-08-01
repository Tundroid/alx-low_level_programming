#include "main.h"
#include <string.h>
/**
* print_chessboard - prints a chessboard
* @a: chess characters
* @: string whose individual bytes are being looked for
*
* Return: address of first occurence in s or NULL is none is found
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
