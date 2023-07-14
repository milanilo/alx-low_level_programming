#include<stdlib.h>
#include"main.h"
/**
 * *_calloc - allocate memory for an array
 * @nmemb: element of array
 * @size: size of memory
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = (void *)malloc(nmemb * size);
	if (p == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (p);
}
