#include "dog.h"
#include <stdio.h>

/**
 * init_dog- function name.
 * @d:- struct pointer
 * @name:- char for name of dogs.
 * @age:- age of dogs.
 * @owner: char for owners names.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
