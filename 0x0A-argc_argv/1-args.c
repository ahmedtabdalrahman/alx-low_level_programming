#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: function input
 * @argv: function input
 *
 * Return: 0
 */

int main(char argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
