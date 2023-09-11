#include "dog.h"

/**
 * init_dog - function initialization
 *
 * @d : function input
 * @name : function input
 * @age : function input
 * @owner : function input
 *
 * Return: 0
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
