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
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (p != NULL)
	{
		unsigned char *bp = (unsigned char *)p;

		for (i = 0; i < nmemb * size; i++)
		{
			bp[i] = 0;
		}
	}
	return (p);
}
