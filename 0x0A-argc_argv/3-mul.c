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
	int i, a = 0, b = 0;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[i]); 
			b = atoi(argv[i + 1]);
			printf("%d\n", (a * b));
		}
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
