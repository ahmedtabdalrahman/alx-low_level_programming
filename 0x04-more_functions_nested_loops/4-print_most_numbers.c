#include "main.h"

/**
 * print_most_numbers - Prints from 0 to 9 except 2 & 4
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		if (c != 50 && c != 52)
			putchar(c);
	 _putchar('\n');

}
