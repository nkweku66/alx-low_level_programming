#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string
 *
 * Return: 0
 * Author - Nana Obeng
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int found_digit = 0;
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            found_digit = 1;
        }
        else if (found_digit)
        {
            break;
        }
    }

    return result * sign;
}
