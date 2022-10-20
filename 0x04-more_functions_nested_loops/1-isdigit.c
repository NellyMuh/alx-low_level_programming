#include "main.h"

/**
 * _isdigit - returns 1 if c is a digit
 * @c: checks character
 *
 * Return: 0 
 **/

int _isdigit(int c)
{
	if( c >= '1' && c <= '10')
		return (1);
	else
		return (0);
}
