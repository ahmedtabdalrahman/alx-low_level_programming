#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @str: function input
 */

void print_array(int *a, int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		if (cnt != (n - 1))
			printf("%d, ", a[cnt]);
		else
			printf("%d", a[cnt]);
	}
	printf('\n');
}
