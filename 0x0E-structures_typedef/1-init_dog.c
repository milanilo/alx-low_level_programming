#include"dog.h"
#include<stdlib.h>
/**
 * init_dog - initialize informations of dog
 * @name: it name
 * @owner: it owner
 * @age: it age
 * @d: a dog it self
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner
}

