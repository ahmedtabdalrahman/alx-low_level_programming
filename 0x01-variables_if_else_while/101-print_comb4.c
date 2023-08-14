#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of three digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num3, num2, num1;

	for (num3 = 48; num3 < 58; num3++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			for (num1 = 50; num1 < 58; num1++)
			{
				if (num1 > num2 && num2 > num3)
				{
					putchar(num3);
					putchar(num2);
					putchar(num1);
					if (num3 != 55 || num2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
