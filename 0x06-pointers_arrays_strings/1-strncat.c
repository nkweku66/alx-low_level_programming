#include "main.h"
/**
 * _strncat - to concatenate strings
 * @dest: first string
 * @src: second string
 * Return : dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
        int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
