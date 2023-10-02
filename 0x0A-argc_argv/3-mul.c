#include <stdio.h>
#include <stdlib.h>

/**
 * main - does multiplication
 * @argc: argument count
 * @argv: array
 *
 * Return: 0;
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2 && argc <= 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (1);
}
