#include "main.h"

/**
* reverse_array - a function that reverses the content of an array of integers
* @a: integer
* @n: integer
* Return: nothing
**/

void reverse_array(int *a, int n)
{
	int i;

	{

	i = 0;
	while (i > n - 1)
	{
		if (i != 0)
	{
		printf(", ");
	}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}

	}
}
