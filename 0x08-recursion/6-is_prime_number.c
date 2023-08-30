#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 *
 * @n: function input
 * @i: function input
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int _prime(int n, int i);
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - checks for prime numbers
 *
 * @n: function input
 * @i: function input
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int _prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (_prime(n, i + 1));
}
