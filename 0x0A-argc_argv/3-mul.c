#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - does a multiplication of two numbers
 * @argc: contains the number of arguments
 * @argv: contains the arguments in string format
 *
 * Return: 1 upon failure
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[i]) * atoi(argv[i + 1]);
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
