#include "dog.h"
/**
 * init_dog - Function that initialize variables of struct
 * @d: Pointer to structure
 * @name: Pointer to name variable
 * @age: age variable
 * @owner: Pointer to owner name
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
