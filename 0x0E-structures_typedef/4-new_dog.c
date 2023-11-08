#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - creates new dog
 * @name: name of dog
 * @age: age
 * @owner: owner of dog
 *
 * Return: success
 * Author - Nana Obeng
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dg = malloc(sizeof(dog_t));

	if (new_dg == NULL)
	{
		return (NULL);
	}

	new_dg->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dg->name == NULL)
	{
		free(new_dg);
		return (NULL);
	}

	new_dg->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dg->owner == NULL)
	{
		free(new_dg->name);
		free(new_dg);
		return (NULL);
	}

	new_dg->name = strcpy(new_dg->name, name);
	new_dg->age = age;
	new_dg->owner = strcpy(new_dg->owner, owner);

	return (new_dg);
}
