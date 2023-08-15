#include "main.h"

/**
 * main - entry point
 *
 * Discription: Prints the string _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
char string[] = "_putchar";
int c;
for (c = 0; c <= 7; c++)
	_putchar(string[c]);
_putchar('\n');
	return (0);
}
