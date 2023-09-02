#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *
 * @argc: function input
 * @argv: function input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, noc = 0;
		int amount = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (amount >= coins[i])
			{
				noc += amount / coins[i];
				amount = amount % coins[i];
				if (amount % coins[i] == 0)
					break;
			}
		}
		printf("%d\n", noc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
