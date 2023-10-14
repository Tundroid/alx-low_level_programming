#include <string.h>
#include <unistd.h>

/**
* main - prints text to the stderr
*
* Return: Always 1 (Error)
*/
int main(void)
{
	char *s1 = "and that piece of art is useful\"";
	char *s2 = " - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, s1, strlen(s1));
	write(STDERR_FILENO, s2, strlen(s2));
	return (1);
}
