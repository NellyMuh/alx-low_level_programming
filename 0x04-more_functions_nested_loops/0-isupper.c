#include "main.h"
#include<stdio.h>


/**
 * _isupper - returns 1 if upper case and 0 if not..
 *@c: takes in character
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
