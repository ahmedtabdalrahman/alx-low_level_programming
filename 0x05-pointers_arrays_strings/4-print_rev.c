#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: function input
 */

void print_rev(char *s)
{
	int cnt = 0;

	while (s[cnt])
		cnt++;

	while (cnt--)
		_putchar(s[cnt]);
	_putchar('\n');
}
