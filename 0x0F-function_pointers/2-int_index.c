#include"function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array that the program will searche in
 * @size: size of the array
 * @cmp: function to pointer that will searche
 * Return: the integer that we searche for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
