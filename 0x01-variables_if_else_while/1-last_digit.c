#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the last digit of intiger n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;
	printf("Last digit of %d is %d ", n, i);
	if (i > 5)
	{
		printf("and is greater than 5\n");
	}
	if (i == 0)
	{
		printf("and is 0\n");
	}
	if (i < 6 && i != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
