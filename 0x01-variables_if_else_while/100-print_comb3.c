#include <stdio.h>
/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;
	while (j < 58)
	{
		if (i != j && i < j)
		{
		putchar(j);
		putchar(i);
		if (i == 57 && j == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	j++;
}
	putchar('\n');
	return (0);
}
