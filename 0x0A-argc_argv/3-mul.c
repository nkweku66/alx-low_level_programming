#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - does a multiplication of two numbers
 * @argc: contains the number of arguments
 * @argv: contains the arguments in string format
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a * b));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
