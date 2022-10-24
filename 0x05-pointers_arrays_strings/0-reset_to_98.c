#include "main.h"
#include<stdio.h>

/*
 * reset_to_98 - takes a pointer to an int as parameter and updates value to 98
 *@n: takes an int
 * Return : int
 *
 **/


void reset_to_98(int *n)
{
	int *ptr, n;

	n = 402;
	*ptr = &n;
	*ptr = 98;

	printf("value of 'n': %d\n", n);
	return (0);
}
