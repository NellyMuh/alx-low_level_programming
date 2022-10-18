#include "main.h"

/**
 * main - prints the alphabet in lower case, followed by a new line
 *
 *
 * Return: Always success
 *
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
