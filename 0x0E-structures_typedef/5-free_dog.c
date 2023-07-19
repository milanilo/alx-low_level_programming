#include<stdlib.h>
#include"dog.h"
/**
 * free_dog - free a pointer to dog
 * @d: the pointer to a dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
