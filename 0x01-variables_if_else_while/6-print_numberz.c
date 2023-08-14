#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digits num of base 10 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
