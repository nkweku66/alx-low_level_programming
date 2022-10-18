#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - contains the arguments
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
