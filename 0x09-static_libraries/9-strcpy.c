#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: dest
 * @src: src
 *
 * Return: res
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return dest_s;
}
