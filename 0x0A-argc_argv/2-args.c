#include <stdio.h>

/**
 * main - prints the arguments passed into it
 *
 * @argc: function input
 * @argv: function input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
