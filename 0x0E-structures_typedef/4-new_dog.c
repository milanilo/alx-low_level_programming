#include"dog.h"
#include<stdlib.h>
/**
 * *new_dog - create a new dog
 * @name: it name
 * @age: it age
 * @owner: owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
	{
		return (NULL);
	}

	dg->name = name;
	dg->age = age;
	dg->owner = owner;
	return (dg);
}
