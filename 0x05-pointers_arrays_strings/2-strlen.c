#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: character
 *
 * Return: i
 * Author - Nana Obeng
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
