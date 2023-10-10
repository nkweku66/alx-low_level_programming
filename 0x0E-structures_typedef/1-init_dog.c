#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (user == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
