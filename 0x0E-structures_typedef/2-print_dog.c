#include "dog.h"

/**
 * print_dog - print content of d
 * @d: pointer struct address
 *
 * Author - Nana Obeng
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->age != (int)d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
