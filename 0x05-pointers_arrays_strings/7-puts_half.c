#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: function input
 */

void puts_half(char *str)
{
	int cnt, i, j;

	for (cnt = 0; str[cnt] != 0; ++cnt)
		;

	i = (cnt + 1) / 2;
	for (j = 0; j <= i; j++)
		_putchar(str[j + i]);
	_putchar('\n');
}
