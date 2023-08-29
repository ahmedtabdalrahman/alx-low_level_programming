#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: function input
 * @b: function input
 * @n: function input
 *
 * Return: new s after being filled with b
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; n--)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
