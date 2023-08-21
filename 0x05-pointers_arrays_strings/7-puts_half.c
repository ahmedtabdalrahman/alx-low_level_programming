#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: function input
 */

void puts_half(char *str)
{
	int cnt;

	for (cnt = 0; str[cnt] != 0; ++cnt)
		;

	cnt++;
	for (cnt /= 2; str[cnt] != 0; cnt++)
		_putchar(str[cnt]);
	_putchar('\n');
}
