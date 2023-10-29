#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

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
	int i;
	long sum = 0,num;
	char *ptr;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &ptr, 10);

			if (*ptr != '\0')
			{
				printf("Error\n");
				return (1);
			}

			if (num > 0)
			{
				if (num != 0)
				{
					sum += num;
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		if (num != 0)
		{
			printf("%ld\n", sum);
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
