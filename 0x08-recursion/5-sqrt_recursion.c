#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: function input
 *
 * Return: the natural square root of a number.
 */

int sqr(int n, int x);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - function that returns the natural square root of a number.
 *
 * @x: function input
 * @n: function input
 *
 * Return: the natural square root of a number.
 */

int sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqr(n, x + 1));
	else
		return (-1);
}
