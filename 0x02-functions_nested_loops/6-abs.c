#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 *
 * @n: funtion input
 *
 * Return: return absolute value (success)
 */

int _abs(int n)
{
	if (n > 0)
		n = n * (-1);
	return (n);
}
