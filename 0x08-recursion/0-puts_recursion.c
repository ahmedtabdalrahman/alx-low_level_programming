#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: function input
 *
 * Return: a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	else
	{
		_putchar(*s);
		_putchar(s + 1);
	}
}
