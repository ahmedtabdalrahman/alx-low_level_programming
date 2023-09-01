#include "main.h"

/**
 * _isupper - checks for upperrcase character
 *
 * @c: funtion input
 *
 * Return: return 1 if uppercase otherwise 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
