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
		ls = (n % 10) * (-1);
	else
		ls = (n % 10);
	return (ls);
}
