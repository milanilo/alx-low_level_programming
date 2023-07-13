#include<stdlib.h>
#include"main.h"
/**
 * *malloc_checked - allocate memory
 *
 * @b: size allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

