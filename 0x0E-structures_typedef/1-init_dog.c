#include "dog.h"
/**
 * init_dog - initializes a struct dog
 *
 * @d: struct variable name
 * @name: name of dog
 * @age: dog's age
 * @owner: name of dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
