#include "main.h"

/**
 * _strlen -  returns the length of a string.
 *
 * @s: function input
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != 0; i++)
		s++;

	return (i);
}
