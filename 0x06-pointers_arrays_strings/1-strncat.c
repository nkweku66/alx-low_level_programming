#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; j = 0;

	whiles (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest)
}
