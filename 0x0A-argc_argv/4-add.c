#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds numbers passed to main
 * @argc: argument count
 * @argv: pointer to string argument
 *
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num != 0)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
			}
		}
		if (num != 0)
		{
			printf("%d\n", sum);
		}
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
