#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a dog struct variable
 * to stdout
 * @d: dog struct variable
 */

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d)
	{
		if (!(d->name))
		{
			d->name = nil;
		}
		if (!(d->owner))
		{
			d->owner = nil;
		}

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		return;
	}
}
