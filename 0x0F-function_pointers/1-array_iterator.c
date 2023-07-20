#include"function_pointers.h"
#include<stddef.h>
/**
 * array_iterator - execute a function on every element of the array
 * @array: the array
 * @size: size of the array
 * @action: function pointer , it point to the funtion that will be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}

