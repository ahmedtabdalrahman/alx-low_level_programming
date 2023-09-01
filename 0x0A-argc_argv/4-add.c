#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: function input
 * @argv: function input
 *
 * Return: 0
 */

int main(char argc, char *argv[])
{
	int i, sum = 0;
	char *s;

	for (i = 0; i < argc; i++)
	{
		for (s = argv[]; *s; s++)
			if (*s > '9' || *s < '0')
			{
				return (printf("Error\n"), 1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
