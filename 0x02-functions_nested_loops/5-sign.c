#include "main.h"

/**
 * print_sign -  prints the sign of a number
 *
 * @n: funtion input
 *
 * Return: return 1 if positive, -1 if negative, otherwise 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	if (n == 0)
	{
		_putchar(45);
		return (0);
	}
}
