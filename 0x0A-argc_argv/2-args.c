#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of all arguments
 * @argc: argument count
 * @argv: array
 *
 * Return: 0 on success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%3s\n", argv[i]);
	}
	return (0);
}
