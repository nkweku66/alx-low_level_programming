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

	printf("Size of a char is: %lu byte(s)\n", sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int is: %lu byte(s)\n", (long long)sizeof(i));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
