#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int c;
	int l;

	for (l = 0; l <= 9; l++)
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
}
