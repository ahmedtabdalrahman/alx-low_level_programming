#include "main.h"

/**
 * more_numbers - Prints from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i;
	int j;
	int t;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			t = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				t = j % 10;
			}
			_putchar(t + 48);
		}
		_putchar('\n');
	}
}
