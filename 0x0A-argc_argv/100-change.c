#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates change
 * @argc: augument count
 * @argv: argument vector
 * Return: change on success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int cents, num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < 5)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
		i++;
	}
	printf("%d\n", num_coins);
	return (0);
}
