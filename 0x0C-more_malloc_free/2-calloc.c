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
	char *p;
	unsigned int i;
	
	p = malloc(size * nmemb);
	for (i = 0; i < nmemb; i++)
	{
		p[i] = '0';
	}
	p = malloc(size * nmemb);
	if (p == NULL || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (p);
}
