#include "main.h"

/**
 * is_prime_number - function returns 1 if prime number, otherwise return 0
 *
 * @n: function input
 * @x: function input
 *
 * Return: 1 if prime number, otherwise return 0
 */

int check(int n, int x);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - function that checks if prime number
 * @x: function input
 * @n: function input
 *
 * Return: 1 if prime number, otherwise return 0
 */

int check(int n, int x)
{
	if (x >= n && n >= 2)
		return (1);
	else if (n % x == 0 || n <= 1)
		return (0);
	else
		return (check(n, x + 1));
}
