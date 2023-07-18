int _putchar(char);
/**
* print_alphabet - Prints a-z
*
* Return: nothing
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch < (97 + 26); ch++)
		_putchar(ch);
	_putchar('\n');
}
