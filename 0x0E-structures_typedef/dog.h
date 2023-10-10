#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Author - Nana Obeng
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
