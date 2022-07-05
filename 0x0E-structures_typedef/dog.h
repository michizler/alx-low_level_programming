#ifndef DOG_H
#define DOG_H
/**
 * struct dog - attributes of a domestic dog
 * @name: first attribute
 * @age: second attribute
 * @owner: third attribute
 */

struct dog
{
	char *name;

	float age;

	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
