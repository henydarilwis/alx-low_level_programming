#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *  pointer to first value
 *  pointer to second value
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
