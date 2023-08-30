#include "main.h"

/**
 * _sqrt_recursion - prints the natural square root of a number
 *
 * @n: function input
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (i * i == n)
		return(i);
	else if (i * i < n)
	{
		i++;
		return (_sqrt_recursion(n));
	}
	else
		return (-1);
}
