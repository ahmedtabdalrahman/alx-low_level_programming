#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 *
 * @n: function input
 *
 * Return: the natural square root of a number
 */
int sqrt(int n, int i); 
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - prints the natural square root of a number
 *
 * @n: function input
 * @i: function input
 *
 * Return: the natural square root of a number
 */

int sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (sqrt(n, i + 1));
	else
		return (-1);
}
