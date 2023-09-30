#include "main.h"

/**
 * *_strncpy - copy string
 * @dest: dest
 * @src: src
 * @n: n
 *
 * Return: strn
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_s = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest_s);
}
