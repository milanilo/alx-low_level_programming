#ifndef DOG_H
#define DOG_H
/**
 * struct dog - include information for dog
 * @name: it name
 * @owner: it owner
 * @age: it age
 * Description: it gives the information about a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

