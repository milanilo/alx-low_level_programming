#include<stdlib.h>
#include"dog.h"
/**
 * init_dog - initialize informations of dog
 * @name: it name
 * @owner: it owner
 * @age: it age
 * @d: a dog it self
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

