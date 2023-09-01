#include <stdio.h>

/**
 * main - prints the sum of two numbers
 *
 * @argc: function input
 * @argv: function input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
