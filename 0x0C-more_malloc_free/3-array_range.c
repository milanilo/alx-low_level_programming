#include<stdlib.h>
#include"main.h"
/**
 * *array_range - create an array of integers
 * @min : first value of the range
 * @max : last value in range
 * Return: pointer to the array created
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (max < min)
	{
		return (NULL);
	}
	else
	{
		p = (int *)malloc((max - min + 1) * sizeof(int));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
