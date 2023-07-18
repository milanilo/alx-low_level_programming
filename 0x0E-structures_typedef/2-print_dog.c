#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 *  print_dog - print information about a dog
 *  @d: the dog
 */
void  print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		printf(" ");
	}
	if (d->name == NULL)
	{
		printf("Name : (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner : (nil)");
	}
	printf("Name : %s\nAge : %1.f\nOwner : %s",d->name,d->age,d->owner);
}

