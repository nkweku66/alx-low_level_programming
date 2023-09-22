#include "main.h"

/**
 * *_strcpy - copies a string into another
 * @dest: container to hold the copied string
 * @src: the source string
 *
 * Return: dest
 * Author - Nana Obeng
 */

char *_strcpy(char *dest, char *src)
{
	char *strg = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (strg);
}
