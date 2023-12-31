#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: the dog struct
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
