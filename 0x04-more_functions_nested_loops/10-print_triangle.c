#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: function input
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < (size - i); j++)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
