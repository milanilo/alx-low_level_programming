#include<stdlib.h>
#include"main.h"
/**
 * *str_concat - return a pointer for concatenated strings
 *
 * @s1: firest string
 * @s2: seconde string
 * Return: the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;
	int r = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
	}
	ptr = (char *)malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL || (i + j + 1) < 0)
	{
		return (NULL);
	}
	while (r < (i + j + 1))
	{
		ptr[r] = s1[r];
		r++;
	}
	return (ptr);
}

