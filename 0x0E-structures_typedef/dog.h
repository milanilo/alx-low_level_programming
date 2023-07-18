#ifndef DOG_H
#define DOG_H
/**
 * struct dog - include information for dog
 * @name: it name
 * @owner: it owner
 * @age: it age
 * Description: it gives the information about a dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} st_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
st_dog *new_dog(char *name, float age, char *owner);
void free_dog(st_dog *d);

#endif

