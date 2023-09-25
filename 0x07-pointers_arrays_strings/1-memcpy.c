#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 * Author - Nana Obeng
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr_dest[i] = ptr_src[i];
	}
	return (dest);
}
