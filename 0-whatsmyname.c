#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - contains the arguments
 * @argc: arguments counts
 * @argv: contains the argument vector
 *
 * Return: returns zero upon success
 */

int main(int argc, char *argv[])
{
	if(argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);	
}
