#include "main.h"

/**
 * print_line -  draws a straight line
 * @n: the number of times the character _ appears
 * Return: nothing.
 **/

void print_line(void)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
