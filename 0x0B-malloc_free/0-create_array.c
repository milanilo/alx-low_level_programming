#include<stdlib.h>
#include"main.h"
/**
 * *create_array - create an array of char
 * @size: size of array
 * @c: character for fill the array
 * Return: null if size<0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;

	tab = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else if (tab == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			tab[i] = c;
		}
		return (tab);
	}
}

