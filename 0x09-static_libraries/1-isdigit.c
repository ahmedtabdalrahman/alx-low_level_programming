#include "main.h"

/**
 * _isdigit - checks for digit character
 *
 * @c: funtion input
 *
 * Return: return 1 if digit otherwise 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
