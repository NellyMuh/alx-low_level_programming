/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char s;

	while (i < 10)
	{
		s = 'a';
		while ( s <= 'z')
		{
			_putchar(s);
			s++;
		}
	_putchar('\n');
	i++;
	}
}
