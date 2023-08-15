#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n;
	int m;
	int r;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			r = n * m;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + 48);
			_putchar((r % 10) + 48);
		}
		_putchar('\n');
	}

}

