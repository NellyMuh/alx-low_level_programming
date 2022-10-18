#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case, followed by a new line
 *
 *
 *
 * Return: Always 0 success
 **/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
