#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *  print_dog - print information about a dog
 *  @d: the dog
 */
void  print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";

	printf("Name : %s\nAge : %1.f\nOwner : %s", d->name, d->age, d->owner);
}

