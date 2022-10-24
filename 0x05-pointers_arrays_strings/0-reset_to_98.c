#include "main.h"

/* reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98
 *
 * Return : ALlways 0
 *
 **/


void reset_to_98 (void)
{
	int *ptr, n;
	
	n = 402;
	*ptr = &n;
	*ptr = 98;

	printf("value of 'n': %d\n", n );
	return (0);
}
