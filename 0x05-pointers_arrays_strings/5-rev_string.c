#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: function input
 */

void rev_string(char *s)
{
	int cnt, i;
	char c;

	for (cnt = 0; s[cnt] != 0; cnt++)
		c = s[i];

	for (i = 0; i <= cnt / 2 , i++)
	{
		c = s[i];
		s[i] = c[cnt - i -1];
		s[cnt - i -1] = c;
		
	}
}
