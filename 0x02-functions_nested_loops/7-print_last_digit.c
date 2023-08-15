#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @n: funtion input
 *
 * Return: return last digit (success)
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = (n % 10) * (-1);
	else
		ld = (n % 10);
	_putchar(ld + 48);
	return (ld);
}
