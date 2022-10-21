#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times the character \ appears
 * Return: nothing
 **/

void  print_diagonal(int n)
{
	int c, i;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c <= i; c++)
		{
			if (c != i)
			{
			_putchar(' ');
			}
		else
			{
			_putchar('\\');
			}
		}
	_putchar('\n');
}
if (n <= 0)
	_putchar('\n');
}
