#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - does a multiplication of two numbers
 * @argc: contains the number of arguments
 * @argv: contains the arguments in string format
 * @a: integer to be multiplied
 * @b: integer to be multiplied
 * @mul: contains the results
 *
 * Return: 0
 * Return: 1 upon failure
 */

int main(int argc, char *argv[])
{
	int i, a, b, mul;

	if(argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			a = atoi(argv[i]);
			b = atoi(argv[i + 1]);
			mul = a * b;
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("Error\n");
		return 1;
	}
	return 0;
}
