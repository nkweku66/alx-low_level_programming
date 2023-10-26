#ifndef DOG_H
#define DOG_H
#include <stdio.h>
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
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif