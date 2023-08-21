#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 *
 * @a: function input
 * @b: function input
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
