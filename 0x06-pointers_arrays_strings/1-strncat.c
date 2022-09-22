#include "main.h"
/**
 * _strncat- to concatenate strings
 * @dest: first string
 * @src: second string
 * @n: the limit of bytes
 * Return : dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	
	i = 0;
	j = 0;	

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
