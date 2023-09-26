#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer to string
 *
 * Author - Nana Obeng
 */

void set_string(char **s, char *to)
{
	char **ptr;

	ptr = &s;
	**ptr = to;
}
