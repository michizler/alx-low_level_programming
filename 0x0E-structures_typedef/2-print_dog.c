#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a dog struct variable
 * to stdout
 * @d: dog struct variable
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else if (!(d->age))
		{
			printf("Name: %s\n", d->name);
			printf("Age: (nil)\n");
			printf("Owner: %s\n", d->owner);
		}
		else if (!(d->owner))
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
	else
	{
		printf("\n");
	}
}
