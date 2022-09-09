#include <stdio.h>
/**
 * main - will print the size of the of the various data types.
 * sizeof() - checks the size
 * Return: 0 upon finishing
 */
int main(void)
{
	char c;
	int i;
	float d;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %llu byte(s)\n", (long long)sizeof(i));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
