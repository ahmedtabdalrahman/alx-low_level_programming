#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: function input
 */

void puts2(char *str)
{
	int cnt;

	for (cnt = 0; str[cnt] != 0; ++cnt)
	{
		if (cnt % 2 == 0)
			_putchar(str[cnt]);
	}
	_putchar('\n');
}
