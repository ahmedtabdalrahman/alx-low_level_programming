#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num2, num1;

	for (num2 = 48; num2 <= 56; num2++)
	{
		for (num1 = 49; num1 <= 57; num1++)
		{
			if (num1 > num2)
			{
				putchar(num2);
				putchar(num1);
				if (num2 != 56 || num1 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
