#include "function_pointers.h"

/**
 * int_index -  find the index of an array element
 * @array: is a pointer to an array
 * @size: is the size of the array
 * @cmp: is the function
 *
 * Return: results
 * Author - Nana Obeng
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}				
