#include<stdlib.h>
#include"main.h"
/**
 * *malloc_checked - allocate memory
 *
 * @b: size allocated
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(b * sizeof(int));
	if (p == NULL)
	{
		exit(98);
	}
}

