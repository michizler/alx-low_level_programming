#include "dog.h"

/**
 * init_dog - initializes a variable "d" of type struct
 * @d: variable to be initialized
 * @name: first attribute of struct
 * @age: second attribute of struct
 * @owner: third attribute of struct
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
