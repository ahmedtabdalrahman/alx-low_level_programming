#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: function input
 */

void print_to_98(int n)
{
	int m;

	if (n > 98)
		for (m = n; m > 98; m--)
			printf("%d, ", m);
	else
		for (m = n; m < 98; m++)
			printf("%d, ", m);
	printd("98\n");
}
