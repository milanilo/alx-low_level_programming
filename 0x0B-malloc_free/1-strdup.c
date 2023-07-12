#include<stdlib.h>
#include"main.h"
/**
 * *_strdup - return a copy of char
 *
 * @str: str source to copy
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;
	char *copy;
	ptr = (char *)malloc(sizeof(char));
	copy = (char *)malloc(sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else if (sizeof(char) < 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < sizeof(char); i++)
		{
			copy[i] = str[i];
			ptr[i] = copy[i];
		}
		return (ptr);
	}
	free(copy);
	free(ptr);
}

