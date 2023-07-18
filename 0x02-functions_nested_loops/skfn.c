#include <stdio.h>
#include "main.h"

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	char x;
	while(1){
		printf("Enter x: ");
		scanf("%c", &x);
		printf("%c is: %d\n", x, _isalpha(x));
	}
	return (0);
}
