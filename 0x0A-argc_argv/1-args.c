#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of arguments to main
 * @argc: argument to main
 * @argv: argument vector
 *
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
