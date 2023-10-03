#include <stdio.h>
#include <stdlib.h>

/**
 * main - does multiplication
 * @argc: argument count
 * @argv: array
 *
 * Return: 0;
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
        int n;
        if (argc >= 3 && argc <= 3)
        {
                n = atoi(argv[1]) * atoi(argv[2]);

                printf("%d\n", n);
        }
        else
        {
                printf("Error\n");
        }
        return (1);
}
