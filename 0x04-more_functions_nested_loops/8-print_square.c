#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *@#: character to print the square
 * Return: nothing
 **/

void print_square(int size)
{
	int i, c;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i <= size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');

}
