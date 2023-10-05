#include "main.h"

/**
 * *create_array - creates an array
 * @size: len of the array
 * @c: initial character
 *
 * Return: Null on failure
 * Author - Nana Obeng
 */

char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *arr;

		arr = (char *)malloc(sizeof(c) * size);

		if (size != NULL)
		{
			unsigned int i;

			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
			return (arr);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
