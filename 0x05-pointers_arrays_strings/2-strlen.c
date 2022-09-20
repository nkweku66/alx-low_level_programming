#include "main.h"

/**
 * int _strlen - print the lenght of the string
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);

}
